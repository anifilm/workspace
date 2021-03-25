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
  <h2>c:redirect 태그</h2>
  <c:redirect url="http://www.daum.net"/>

  <p><a href="Jstl10.jsp">[이전]</a><a href="Jstl12.jsp">[다음]</a></p>
</body>
</html>
