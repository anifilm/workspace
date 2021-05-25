<%@ page import="spms.vo.Member" %>
<%@ page isELIgnored="false" %> <%-- EL 문법 사용시 추가 필요 --%>
<%@ page
  contentType="text/html;charset=UTF-8"
  language="java"
  pageEncoding="UTF-8" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<div style="background-color: #00008b; color: #ffffff; height: 20px; padding: 5px;">
  SPMS(Simple Project Management System)
  <c:if test="${!empty sessionScope.member and !empty sessionScope.member.email}">
  <span style="float: right;">
    ${sessionScope.member.name}
    <a style="color: white;" href="<%= request.getContextPath() %>/auth/logout.do">로그아웃</a>
  </span>
  </c:if>
  <c:if test="${empty sessionScope.member and empty sessionScope.member.email}">
  <span style="float: right;">
    <a style="color: gray;" href="<%= request.getContextPath() %>/auth/login.do">로그인</a>
  </span>
  </c:if>
</div>
