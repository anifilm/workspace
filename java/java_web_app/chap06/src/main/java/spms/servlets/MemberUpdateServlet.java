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
//@SuppressWarnings("serial")
@WebServlet("/member/update")
public class MemberUpdateServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

        try {
            ServletContext sc = this.getServletContext();
            MemberDao memberDao = (MemberDao) sc.getAttribute("memberDao");

            Member member = memberDao.selectOne(Integer.parseInt(request.getParameter("no")));

            request.setAttribute("member", member);

            //RequestDispatcher rd = request.getRequestDispatcher("/member/MemberUpdateForm.jsp");
            //rd.forward(request, response);
            request.setAttribute("viewUrl", "/member/MemberUpdateForm.jsp");

        } catch (Exception e) {
            //e.printStackTrace();
            //request.setAttribute("error", e);
            //RequestDispatcher rd = request.getRequestDispatcher("/Error.jsp");
            //rd.forward(request, response);
            throw new ServletException(e);
        }
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

        try {
            ServletContext sc = this.getServletContext();
            MemberDao memberDao = (MemberDao) sc.getAttribute("memberDao");

            //memberDao.update(new Member()
            //         .setNo(Integer.parseInt(request.getParameter("no")))
            //         .setName(request.getParameter("name"))
            //         .setEmail(request.getParameter("email")));
            //
            //response.sendRedirect("list");

            Member member = (Member)request.getAttribute("member");
            memberDao.update(member);

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
