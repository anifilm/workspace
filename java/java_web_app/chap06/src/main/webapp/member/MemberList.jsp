<%--<%@ page import="spms.vo.Member" %>--%>
<%--<%@ page import="java.util.ArrayList" %>--%>
<%@ page isELIgnored="false" %> <%-- EL 문법 사용시 추가 필요 --%>
<%@ page
contentType="text/html;charset=UTF-8"
language="java"
pageEncoding="UTF-8" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<!DOCTYPE html>
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  <title>회원 목록</title>
</head>
<body>
  <jsp:include page="/Header.jsp"/>
  <h1>회원목록</h1>
  <p><a href='add'>신규 회원</a></p>
<%--<jsp:useBean id="members"
               scope="request"
               class="java.util.ArrayList"
               type="java.util.ArrayList<spms.vo.Member>" />
  <%
  //ArrayList<Member> members = (ArrayList<Member>)request.getAttribute("members");
  for (Member member : members) {
  %>
  <%= member.getNo() %>,
  <a href="update?no=<%= member.getNo() %>"><%= member.getName() %></a>,
  <%= member.getEmail() %>,
  <%= member.getCreatedDate() %>
  <a href="delete?no=<%= member.getNo() %>">[삭제]</a><br>
  <% } %>--%>
  <%-- JSTL 문법 사용 --%>
  <c:forEach var="member" items="${members}">
    ${member.no},
    <a href="update?no=${member.no}">${member.name}</a>,
    ${member.email},
    ${member.createdDate}
    <a href="delete?no=${member.no}">[삭제]</a><br>
  </c:forEach>
  <jsp:include page="/Tail.jsp"/>
</body>
</html>
