package spms.servlets;

import spms.dao.MemberDao;
import spms.vo.Member;

import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import java.io.IOException;

// 프런트 컨트롤러 적용
@WebServlet("/member/add")
public class MemberAddServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        //RequestDispatcher rd = request.getRequestDispatcher("/member/MemberForm.jsp");
        //rd.forward(request, response);
        request.setAttribute("viewUrl", "/member/MemberForm.jsp");
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

        try {
            ServletContext sc = this.getServletContext();
            MemberDao memberDao = (MemberDao) sc.getAttribute("memberDao");

            //memberDao.insert(new Member()
            //         .setEmail(request.getParameter("email"))
            //         .setPassword(request.getParameter("password"))
            //         .setName(request.getParameter("name")));

            //response.sendRedirect("list");

            Member member = (Member)request.getAttribute("member");
            memberDao.insert(member);

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
