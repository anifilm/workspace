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
  <h2>c:out 태그</h2>
  1) <c:out value="안녕하세요!"/><br>
  2) <c:out value="${null}">반갑습니다.</c:out><br>
  3) <c:out value="안녕하세요!">반갑습니다.</c:out><br>
  4) <c:out value="${null}"/><br>

  <p><a href="Jstl02.jsp">[다음]</a></p>
</body>
</html>
