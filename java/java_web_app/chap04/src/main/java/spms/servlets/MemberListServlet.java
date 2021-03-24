package spms.servlets;

import javax.servlet.GenericServlet;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.annotation.WebServlet;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

@WebServlet("/member/list")
public class MemberListServlet extends GenericServlet {
    private static final long serialVersionUID = 1L;

    @Override
    public void service(ServletRequest servletRequest, ServletResponse servletResponse)
            throws ServletException, IOException {
        Connection conn = null;
        Statement stmt = null;
        ResultSet rs = null;

        try {
            DriverManager.registerDriver(new com.mysql.jdbc.Driver());
            conn = DriverManager.getConnection(
                    "jdbc:mysql://localhost/java_web_app_chap04", // JDBC URL
                    "root",     // DBMS 사용자 아이디
                    "lcy0200"); // DBMS 사용자 암호
            stmt = conn.createStatement();
            rs = stmt.executeQuery(
                    "SELECT MNO,MNAME,EMAIL,CRE_DATE" +
                    " FROM MEMBERS" +
                    " ORDER BY MNO ASC");

            servletResponse.setContentType("text/html; charset=UTF-8");
            PrintWriter out = servletResponse.getWriter();
            out.println("<html><head><title>회원목록</title></head>");
            out.println("<body><h1>회원목록</h1>");
            out.println("<p><a href='add'>신규 회원</a></p>");
            while(rs.next()) {
                out.println(
                        rs.getInt("MNO") + ", " +
                        rs.getString("MNAME") + ", " +
                        rs.getString("EMAIL") + ", " +
                        rs.getDate("CRE_DATE") + "<br>"
                );
            }
            out.println("</body></html>");
        } catch (Exception e) {
            throw new ServletException(e);
        } finally {
            try { if (rs != null) rs.close(); } catch(Exception e) { }
            try { if (stmt != null) stmt.close(); } catch(Exception e) { }
            try { if (conn != null) conn.close(); } catch(Exception e) { }
        }
    }
}
