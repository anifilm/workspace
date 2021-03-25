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
  <h2>c:import 태그</h2>

  <h3>RSS 피드 가져오기</h3>
  <textarea rows="10" cols="80">
  <c:import url="http://rss.etnews.co.kr/Section901.xml" />
  </textarea>

  <h3>RSS 피드 가져오기 - 보관소에 저장</h3>
  <c:import var="zdnetRSS" url="http://rss.etnews.co.kr/Section902.xml" />
  <textarea rows="10" cols="80">${zdnetRSS}</textarea>

  <p><a href="Jstl08.jsp">[이전]</a><a href="Jstl10.jsp">[다음]</a></p>
</body>
</html>
