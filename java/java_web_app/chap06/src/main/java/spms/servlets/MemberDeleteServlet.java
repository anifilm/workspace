package spms.servlets;

import spms.dao.MemberDao;

import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import java.io.IOException;

// 프런트 컨트롤러 적용
@WebServlet("/member/delete")
public class MemberDeleteServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

        try {
            ServletContext sc = this.getServletContext();
            MemberDao memberDao = (MemberDao) sc.getAttribute("memberDao");

            memberDao.delete(Integer.parseInt(request.getParameter("no")));

            //response.sendRedirect("list");
            request.setAttribute("viewUrl", "redirect:list.do");

        } catch (Exception e) {
            //e.printStackTrace();
            //request.setAttribute("error", e);
            //RequestDispatcher rd = request.getRequestDispatcher("/Error.jsp");
            //rd.forward(request, response);
            throw new ServletException(e);
        }
    }
}
