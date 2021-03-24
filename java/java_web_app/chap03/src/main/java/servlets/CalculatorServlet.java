package servlets;

import javax.servlet.GenericServlet;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.annotation.WebServlet;
import java.io.IOException;
import java.io.PrintWriter;

@WebServlet("/calc")
public class CalculatorServlet extends GenericServlet {
    private static final long serialVersionUID = 1L;

    @Override
    public void service(ServletRequest servletRequest, ServletResponse servletResponse)
            throws ServletException, IOException {
        int a = Integer.parseInt(servletRequest.getParameter("a"));
        int b = Integer.parseInt(servletRequest.getParameter("b"));

        servletResponse.setContentType("text/plain");
        servletResponse.setCharacterEncoding("UTF-8");

        PrintWriter writer = servletResponse.getWriter();
        writer.println("a=" + a + ", " + "b=" + b + "의 계산결과 입니다.");
        writer.println("a + b = " + (a + b));
        writer.println("a - b = " + (a - b));
        writer.println("a * b = " + (a * b));
        writer.println("a / b = " + ((float)a / (float)b));
        writer.println("a % b = " + (a % b));
    }
}
