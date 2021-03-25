<%@ page isELIgnored="false" %> <%-- EL 문법 사용시 추가 필요 --%>
<%@ page
contentType="text/html; charset=UTF-8"
language="java"
pageEncoding="UTF-8"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/fmt" prefix="fmt" %>
<!DOCTYPE html>
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  <title>JSTL</title>
</head>
<body>
  <h2>날짜 다루기</h2>
  <h3>fmt:parseDate 태그</h3>
  <code>
    &lt;fmt:parseDate var="date1" value="2013-11-16" pattern="yyyy-MM-dd"/>
  </code>
  <fmt:parseDate var="date1" value="2013-11-16" pattern="yyyy-MM-dd"/>

  <h3>fmt:formatDate 태그</h3>
  <fmt:formatDate value="${date1}" pattern="MM/dd/yy"/>

<p><a href="Jstl11.jsp">[이전]</a></p>
</body>
</html>
