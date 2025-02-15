package section1.ex01;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import java.io.IOException;

public class FirstServlet extends HttpServlet {
    @Override
    public void init() throws ServletException {
        System.out.println("FirstServlet init 메서드 호출");
    }

    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        System.out.println("FirstServlet doGet 메서드 호출");
    }

    @Override
    public void destroy() {
        System.out.println("FirstServlet destroy 메서드 호출");
    }
}
