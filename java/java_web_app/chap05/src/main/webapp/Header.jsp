<%--<%@ page import="spms.vo.Member" %>--%>
<%@ page
  contentType="text/html;charset=UTF-8"
  language="java"
  pageEncoding="UTF-8" %>
<jsp:useBean id="member"
             scope="session"
             class="spms.vo.Member" />
<%
//Member member = (Member)session.getAttribute("member");
%>
<div style="background-color: #00008b; color: #ffffff; height: 20px; padding: 5px;">
  SPMS(Simple Project Management System)
  <% if (member.getEmail() != null) { %>
  <span style="float: right;">
    <%= member.getName() %>
    <a style="color: white;" href="<%= request.getContextPath() %>/auth/logout">로그아웃</a>
  </span>
  <% } else { %>
  <span style="float: right;">
    <a style="color: gray;" href="<%= request.getContextPath() %>/auth/login">로그인</a>
  </span>
  <% } %>
</div>
