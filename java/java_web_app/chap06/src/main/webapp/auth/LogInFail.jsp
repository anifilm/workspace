<%@ page
  contentType="text/html;charset=UTF-8"
  language="java"
  pageEncoding="UTF-8" %>
<!DOCTYPE html>
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  <meta http-equiv="Refresh" content="1; url=login">
  <title>로그인 실패</title>
</head>
<body>
  <jsp:include page="/Header.jsp"/>
  <p>로그인 실패입니다. 이메일 또는 암호가 맞지 않습니다.!<br>
     잠시 후에 다시 로그인 화면으로 갑니다.</p>
  <jsp:include page="/Tail.jsp"/>
</body>
</html>
