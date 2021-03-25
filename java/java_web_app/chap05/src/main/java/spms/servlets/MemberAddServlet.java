package spms.servlets;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import java.io.IOException;
import java.sql.Connection;
import java.sql.PreparedStatement;

@WebServlet("/member/add")
public class MemberAddServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        RequestDispatcher rd = request.getRequestDispatcher("/member/MemberForm.jsp");
        rd.forward(request, response);

        /* UI 출력 코드를 제거하고, UI 생성 및 출력을 JSP에게 위임한다.
        response.setContentType("text/html; charset=UTF-8");

        PrintWriter out = response.getWriter();
        out.println("<html><head><title>회원 등록</title></head>");
        out.println("<body><h1>회원 등록</h1>");
        out.println("<form action='add' method='post'>");
        out.println("이름: <input type='text' name='name'><br>");
        out.println("이메일: <input type='text' name='email'><br>");
        out.println("암호: <input type='password' name='password'><br>");
        out.println("<input type='submit' value='추가'>");
        out.println("<input type='button' value='취소'" + " onclick='location.href=\"list\"'>");
        out.println("</form>");
        out.println("</body></html>");
         */
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        // CharacterEncodingFilter에서 처리
        //request.setCharacterEncoding("UTF-8");

        Connection conn = null;
        PreparedStatement stmt = null;

        try {
            ServletContext sc = this.getServletContext();
            //Class.forName(sc.getInitParameter("driver"));
            //conn = DriverManager.getConnection(
            //        sc.getInitParameter("url"),
            //        sc.getInitParameter("username"),
            //        sc.getInitParameter("password"));
            // ServletContext에 보관된 Connection 객체 사용
            conn = (Connection) sc.getAttribute("conn");
            stmt = conn.prepareStatement(
                    "INSERT INTO MEMBERS(EMAIL,PWD,MNAME,CRE_DATE,MOD_DATE)"
                    + " VALUES (?,?,?,NOW(),NOW())");
            stmt.setString(1, request.getParameter("email"));
            stmt.setString(2, request.getParameter("password"));
            stmt.setString(3, request.getParameter("name"));
            stmt.executeUpdate();

            response.sendRedirect("list");

            /*
            response.setContentType("text/html; charset=UTF-8");
            PrintWriter out = response.getWriter();
            out.println("<html><head><title>회원등록결과</title>");
            // meta 태그를 이용한 리프래시, <head>태그 안에 선언해야 한다.
            out.println("<meta http-equiv='Refresh' content='1; url=list'>");
            out.println("</head>");
            out.println("<body>");
            out.println("<p>등록 성공입니다!</p>");
            out.println("</body></html>");

            // 리프레시 정보를 응답 헤더에 추가
            //response.addHeader("Refresh", "1;url=list");
            */

        } catch (Exception e) {
            //throw new ServletException(e);
            e.printStackTrace();
            request.setAttribute("error", e);
            RequestDispatcher rd = request.getRequestDispatcher("/Error.jsp");
            rd.forward(request, response);

        } finally {
            try { if (stmt != null) stmt.close(); } catch(Exception e) { }
            //try { if (conn != null) conn.close(); } catch(Exception e) { }
        }
    }
}
