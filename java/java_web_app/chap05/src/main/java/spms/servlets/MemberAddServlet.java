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

@WebServlet("/member/add")
public class MemberAddServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        RequestDispatcher rd = request.getRequestDispatcher("/member/MemberForm.jsp");
        rd.forward(request, response);
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

            memberDao.insert(new Member()
                    .setEmail(request.getParameter("email"))
                    .setPassword(request.getParameter("password"))
                    .setName(request.getParameter("name")));

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
