<%@ page isELIgnored="false" %> <%-- EL 문법 사용시 추가 필요 --%>
<%@ page
contentType="text/html; charset=UTF-8"
language="java"
pageEncoding="UTF-8"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<!DOCTYPE html>
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  <title>JSTL</title>
</head>
<body>
  <h2>c:remove 태그</h2>
  <h3>보관소에 저장된 값 제거</h3>
  <% pageContext.setAttribute("username1", "홍길동"); %>
  1) ${username1}<br>
  <c:remove var="username1"/>
  2) ${username1}<br>

  <p><a href="Jstl02.jsp">[이전]</a><a href="Jstl04.jsp">[다음]</a></p>
</body>
</html>
