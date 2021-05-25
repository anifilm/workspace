package spms.servlets;

import spms.dao.MemberDao;
import spms.vo.Member;

import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import java.io.IOException;

// 프런트 컨트롤러 적용
@WebServlet("/auth/login")
public class LoginServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        //RequestDispatcher rd = request.getRequestDispatcher("/auth/LogInForm.jsp");
        //rd.forward(request, response);
        request.setAttribute("viewUrl", "/auth/LogInForm.jsp");
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

        try {
            ServletContext sc = this.getServletContext();
            MemberDao memberDao = (MemberDao) sc.getAttribute("memberDao");
            Member member = memberDao.exist(
                    request.getParameter("email"),
                    request.getParameter("password"));

            if (member != null) {
                HttpSession session = request.getSession();
                session.setAttribute("member", member);
                //response.sendRedirect("../member/list");
                request.setAttribute("viewUrl", "redirect:../member/list.do");
            }
            else {
                //RequestDispatcher rd = request.getRequestDispatcher("/auth/LogInFail.jsp");
                //rd.forward(request, response);
                request.setAttribute("viewUrl", "/auth/LogInFail.jsp");
            }

        } catch (Exception e) {
            throw new ServletException(e);
        }
    }
}
