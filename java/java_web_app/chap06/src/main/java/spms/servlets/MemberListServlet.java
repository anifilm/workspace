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
@WebServlet("/member/list")
public class MemberListServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;

    @Override
    public void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

        try {
            ServletContext sc = this.getServletContext();
            MemberDao memberDao = (MemberDao)sc.getAttribute("memberDao");

            request.setAttribute("members", memberDao.selectList());
            //request.setAttribute("viewUrl", "/member/MemberList.jsp");

            //request.setAttribute("members", memberDao.selectList());
            //response.setContentType("text/html; charset=UTF-8");
            //RequestDispatcher rd = request.getRequestDispatcher("/member/MemberList.jsp");
            //rd.include(request, response);

        } catch (Exception e) {
            throw new ServletException(e);
            //e.printStackTrace();
            //request.setAttribute("error", e);
            //RequestDispatcher rd = request.getRequestDispatcher("/Error.jsp");
            //rd.forward(request, response);
        }
    }
}
