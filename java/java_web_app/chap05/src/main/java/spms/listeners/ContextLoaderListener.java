package spms.listeners;

import spms.dao.MemberDao;
import spms.util.DBConnectionPool;

import javax.servlet.ServletContext;
import javax.servlet.ServletContextEvent;
import javax.servlet.ServletContextListener;
import javax.servlet.annotation.WebListener;

import java.sql.Connection;
import java.sql.DriverManager;

@WebListener
public class ContextLoaderListener implements ServletContextListener {
    //Connection conn;
    DBConnectionPool connPool;

    @Override
    public void contextInitialized(ServletContextEvent event) {
        try {
            ServletContext sc = event.getServletContext();

            //Class.forName(sc.getInitParameter("driver"));
            //conn = DriverManager.getConnection(
            connPool = new DBConnectionPool(
                    sc.getInitParameter("driver"),
                    sc.getInitParameter("url"),
                    sc.getInitParameter("username"),
                    sc.getInitParameter("password"));

            MemberDao memberDao = new MemberDao();
            //memberDao.setConnection(conn);
            memberDao.setDbConnectionPool(connPool);

            sc.setAttribute("memberDao", memberDao);

        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    @Override
    public void contextDestroyed(ServletContextEvent event) {
        //try { conn.close(); } catch (Exception e) { }
        connPool.closeAll();
    }
}
