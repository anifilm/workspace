package info.thecodinglive.basic;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;

@WebServlet(name = "HelloServlet", urlPatterns = {"/helloget"})
public class HelloServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        System.out.println("doGet 메서드 호출");
        resp.setCharacterEncoding("utf-8");
        PrintWriter writer = resp.getWriter();
        // contentType 정의
        resp.setContentType("text/html");
        writer.println("<html>");
        writer.println("<head>");
        writer.println("<title>jpub java webservice</title>");
        writer.println("</head>");
        writer.println("<body>");
        writer.println("<p>get 요청 예제입니다.</p>");
        writer.println("</body>");
        writer.println("</html>");
    }
}
