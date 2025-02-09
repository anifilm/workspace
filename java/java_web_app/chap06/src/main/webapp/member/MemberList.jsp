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
  <p><a href='add.do'>신규 회원</a></p>
  <%-- JSTL 문법 사용 --%>
  <c:forEach var="member" items="${members}">
    ${member.no},
    <a href="update.do?no=${member.no}">${member.name}</a>,
    ${member.email},
    ${member.createdDate}
    <a href="delete.do?no=${member.no}">[삭제]</a><br>
  </c:forEach>
  <jsp:include page="/Tail.jsp"/>
</body>
</html>
