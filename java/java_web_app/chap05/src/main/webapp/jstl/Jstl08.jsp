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
  <h2>c:url 태그</h2>
  <c:url var="calcUrl" value="http://localhost:8080/chap05/calc/Calculator.jsp">
    <c:param name="v1" value="20" />
    <c:param name="v2" value="30" />
    <c:param name="op" value="+" />
  </c:url>
  <a href="${calcUrl}">계산하기</a>

  <p><a href="Jstl07.jsp">[이전]</a><a href="Jstl09.jsp">[다음]</a></p>
</body>
</html>
