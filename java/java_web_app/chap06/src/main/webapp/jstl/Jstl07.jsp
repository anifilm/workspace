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
  <h2>c:forTokens 태그</h2>
  <% pageContext.setAttribute("tokens","v1=20&v2=30&op=+"); %>
  <ul>
    <c:forTokens var="item" items="${tokens}" delims="&">
      <li>${item}</li>
    </c:forTokens>
  </ul>

  <p><a href="Jstl06.jsp">[이전]</a><a href="Jstl08.jsp">[다음]</a></p>
</body>
</html>
