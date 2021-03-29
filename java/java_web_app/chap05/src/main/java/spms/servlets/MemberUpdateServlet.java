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

@SuppressWarnings("serial")
@WebServlet("/member/update")
public class MemberUpdateServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

        try {
            ServletContext sc = this.getServletContext();
            //Connection conn = (Connection) sc.getAttribute("conn");

            //MemberDao memberDao = new MemberDao();
            //memberDao.setConnection(conn);
            MemberDao memberDao = (MemberDao) sc.getAttribute("memberDao");

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
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

        try {
            ServletContext sc = this.getServletContext();
            //Connection conn = (Connection) sc.getAttribute("conn");

            //MemberDao memberDao = new MemberDao();
            //memberDao.setConnection(conn);
            MemberDao memberDao = (MemberDao) sc.getAttribute("memberDao");

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
    }
}
