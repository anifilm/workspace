<%@ page
  contentType="text/html;charset=UTF-8"
  language="java"
  pageEncoding="UTF-8" %>
<!DOCTYPE html>
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  <title>로그인</title>
</head>
<body>
  <jsp:include page="/Header.jsp"/>
  <h2>사용자 로그인</h2>
  <form action="login" method="post">
    이메일: <input type="text" name="email"><br>
    암호: <input type="password" name="password"><br>
    <input type="submit" value="로그인">
    <input type="button" value="게스트 접속" onclick="location.href='../member/list'">
  </form>
  <jsp:include page="/Tail.jsp"/>
</body>
</html>
