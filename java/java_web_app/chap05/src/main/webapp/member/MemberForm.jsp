<%@ page import="spms.vo.Member" %>
<%@ page import="java.util.ArrayList" %>
<%@ page
  contentType="text/html;charset=UTF-8"
  language="java"
  pageEncoding="UTF-8" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"
"http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
  <title>회원 등록</title>
</head>
<body>
  <h1>회원 등록</h1>
  <form action="add" method="post">
    이름: <input type="text" name="name"><br>
    이메일: <input type="text" name="email"><br>
    암호: <input type="password" name="password"><br>
    <input type="submit" value="추가">
    <input type="button" value="취소" onclick="location.href='list'">
  </form>
</body>
</html>
