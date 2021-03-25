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
  <h2>c:if 태그</h2>
  <c:if test="${10 > 20}" var="result1">
  1) 10은 20보다 크다.<br>
  </c:if>
  2) ${result1}<br>

  <c:if test="${10 < 20}" var="result2">
  3) 10은 20보다 크다.<br>
  </c:if>
  4) ${result2}<br>

  <p><a href="Jstl03.jsp">[이전]</a><a href="Jstl05.jsp">[다음]</a></p>
</body>
</html>
