package spms.servlets;

import spms.vo.Member;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import java.io.IOException;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;

@WebServlet("/member/list")
public class MemberListServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;

    @Override
    public void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        Connection conn = null;
        Statement stmt = null;
        ResultSet rs = null;

        try {
            ServletContext sc = this.getServletContext();
            //Class.forName(sc.getInitParameter("driver"));
            //conn = DriverManager.getConnection(
            //        sc.getInitParameter("url"),
            //        sc.getInitParameter("username"),
            //        sc.getInitParameter("password"));
            // ServletContext에 보관된 Connection 객체 사용
            conn = (Connection) sc.getAttribute("conn");
            stmt = conn.createStatement();
            rs = stmt.executeQuery(
                    "SELECT MNO,MNAME,EMAIL,CRE_DATE" +
                    " FROM MEMBERS" +
                    " ORDER BY MNO ASC");

            response.setContentType("text/html; charset=UTF-8");
            ArrayList<Member> members = new ArrayList<Member>();

            // 데이터베이스에서 회원 정보를 가져와 Member에 담는다.
            // 그리고 Member객체를 ArrayList에 추가한다.
            while (rs.next()) {
                members.add(new Member()
                        .setNo(rs.getInt("MNO"))
                        .setName(rs.getString("MNAME"))
                        .setEmail(rs.getString("EMAIL"))
                        .setCreatedDate(rs.getDate("CRE_DATE")));
            }

            // request에 회원 목록 데이터를 보관한다.
            request.setAttribute("members", members);

            RequestDispatcher rd = request.getRequestDispatcher("/member/MemberList.jsp");
            rd.include(request, response);

            /* UI 출력 코드를 제거하고, UI 생성 및 출력을 JSP에게 위임한다.
            PrintWriter out = response.getWriter();
            out.println("<html><head><title>회원목록</title></head>");
            out.println("<body><h1>회원목록</h1>");
            out.println("<p><a href='add'>신규 회원</a></p>");
            while(rs.next()) {
                out.println(
                        rs.getInt("MNO") + ", " + "<a href='update?no=" + rs.getInt("MNO") + "'>" +
                        rs.getString("MNAME") + "</a>, " + rs.getString("EMAIL") + ", " +
                        rs.getDate("CRE_DATE") + "<a href='delete?no=" + rs.getInt("MNO") + "'>&nbsp;[삭제]</a><br>");
            }
            out.println("</body></html>");
            */

        } catch (Exception e) {
            //throw new ServletException(e);
            e.printStackTrace();
            request.setAttribute("error", e);
            RequestDispatcher rd = request.getRequestDispatcher("/Error.jsp");
            rd.forward(request, response);

        } finally {
            try { if (rs != null) rs.close(); } catch(Exception e) { }
            try { if (stmt != null) stmt.close(); } catch(Exception e) { }
            //try { if (conn != null) conn.close(); } catch(Exception e) { }
        }
    }
}
