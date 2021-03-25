package spms.filters;

import javax.servlet.*;
import javax.servlet.annotation.WebFilter;
import javax.servlet.annotation.WebInitParam;
import java.io.IOException;

@WebFilter(
        urlPatterns = "/*",
        initParams = {
                @WebInitParam(name="encoding",value="UTF-8")
        })
public class CharacterEncodingFilter implements Filter {
    FilterConfig config;

    @Override
    public void init(FilterConfig config) throws ServletException {
        this.config = config;
    }

    @Override
    public void doFilter(ServletRequest request, ServletResponse response, FilterChain nextFilter)
            throws IOException, ServletException {
        request.setCharacterEncoding(config.getInitParameter("encoding"));
        nextFilter.doFilter(request, response);
    }

    @Override
    public void destroy() { }
}
