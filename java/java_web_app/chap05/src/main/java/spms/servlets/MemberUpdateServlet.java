package spms.servlets;

import spms.dao.MemberDao;
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

@SuppressWarnings("serial")
@WebServlet("/member/update")
public class MemberUpdateServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        //Connection conn = null;
        //Statement stmt = null;
        //ResultSet rs = null;

        try {
            ServletContext sc = this.getServletContext();
            Connection conn = (Connection) sc.getAttribute("conn");

            /* ServletContext에 보관된 Connection 객체 사용
            conn = (Connection) sc.getAttribute("conn");
            stmt = conn.createStatement();
            rs = stmt.executeQuery(
                    "SELECT MNO,EMAIL,MNAME,CRE_DATE FROM MEMBERS" +
                    " WHERE MNO=" + request.getParameter("no"));

            if (rs.next()) {
                request.setAttribute("member",
                        new Member()
                        .setNo(rs.getInt("MNO"))
                        .setEmail(rs.getString("EMAIL"))
                        .setName(rs.getString("MNAME"))
                        .setCreatedDate(rs.getDate("CRE_DATE")));
            }
            else {
                throw new Exception("해당 번호의 회원을 찾을 수 없습니다.");
            }
             */

            MemberDao memberDao = new MemberDao();
            memberDao.setConnection(conn);

            Member member = memberDao.selectOne(Integer.parseInt(request.getParameter("no")));

            request.setAttribute("member", member);

            RequestDispatcher rd = request.getRequestDispatcher("/member/MemberUpdateForm.jsp");
            rd.forward(request, response);

        } catch (Exception e) {
            //throw new ServletException(e);
            e.printStackTrace();
            request.setAttribute("error", e);
            RequestDispatcher rd = request.getRequestDispatcher("/Error.jsp");
            rd.forward(request, response);
        }
        /* finally {
            try { if (rs != null) rs.close(); } catch(Exception e) { }
            try { if (stmt != null) stmt.close(); } catch(Exception e) { }
            //try { if (conn != null) conn.close(); } catch(Exception e) { }
        } */
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        // CharacterEncodingFilter에서 처리
        //request.setCharacterEncoding("UTF-8");

        //Connection conn = null;
        //PreparedStatement stmt = null;

        try {
            ServletContext sc = this.getServletContext();
            Connection conn = (Connection) sc.getAttribute("conn");

            /* ServletContext에 보관된 Connection 객체 사용
            conn = (Connection) sc.getAttribute("conn");
            stmt = conn.prepareStatement(
                    "UPDATE MEMBERS SET EMAIL=?,MNAME=?,MOD_DATE=now()"
                    + " WHERE MNO=?");
            stmt.setString(1, request.getParameter("email"));
            stmt.setString(2, request.getParameter("name"));
            stmt.setInt(3, Integer.parseInt(request.getParameter("no")));
            stmt.executeUpdate();
             */

            MemberDao memberDao = new MemberDao();
            memberDao.setConnection(conn);

            memberDao.update(new Member()
                    .setNo(Integer.parseInt(request.getParameter("no")))
                    .setName(request.getParameter("name"))
                    .setEmail(request.getParameter("email")));

            response.sendRedirect("list");

        } catch (Exception e) {
            //throw new ServletException(e);
            e.printStackTrace();
            request.setAttribute("error", e);
            RequestDispatcher rd = request.getRequestDispatcher("/Error.jsp");
            rd.forward(request, response);
        }
        /* finally {
            try { if (stmt != null) stmt.close(); } catch(Exception e) { }
            //try { if (conn != null) conn.close(); } catch(Exception e) { }
        } */
    }
}
