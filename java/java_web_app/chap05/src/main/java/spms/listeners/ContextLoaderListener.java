package spms.listeners;

// Apache BDCP 적용
import java.sql.SQLException;

import javax.servlet.ServletContext;
import javax.servlet.ServletContextEvent;
import javax.servlet.ServletContextListener;
import javax.servlet.annotation.WebListener;

import org.apache.commons.dbcp2.BasicDataSource;

import spms.dao.MemberDao;

@WebListener
public class ContextLoaderListener implements ServletContextListener {
    //DBConnectionPool connPool;
    BasicDataSource ds;

    @Override
    public void contextInitialized(ServletContextEvent event) {
        try {
            ServletContext sc = event.getServletContext();

            //connPool = new DBConnectionPool(
            //        sc.getInitParameter("driver"),
            //        sc.getInitParameter("url"),
            //        sc.getInitParameter("username"),
            //        sc.getInitParameter("password"));
            ds = new BasicDataSource();
            ds.setDriverClassName(sc.getInitParameter("driver"));
            ds.setUrl(sc.getInitParameter("url"));
            ds.setUsername(sc.getInitParameter("username"));
            ds.setPassword(sc.getInitParameter("password"));

            MemberDao memberDao = new MemberDao();
            //memberDao.setDbConnectionPool(connPool);
            memberDao.setDataSource(ds);

            sc.setAttribute("memberDao", memberDao);

        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    @Override
    public void contextDestroyed(ServletContextEvent event) {
        //connPool.closeAll();
        try {
            if (ds != null) ds.close();
        } catch (SQLException e) { }
    }
}
