<%@ page
  contentType="text/html;charset=UTF-8"
  language="java"
  pageEncoding="UTF-8" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"
"http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
  <title>회원 정보</title>
</head>
<body>
  <h1>회원 정보</h1>
  <jsp:useBean id="member"
               scope="request"
               class="spms.vo.Member"/>
  <form action="update" method="post">
    번호: <input type="text" name="no" value="<%= member.getNo() %>" readonly><br>
    이름: <input type="text" name="name" value="<%= member.getName() %>"><br>
    이메일: <input type="text" name="email" value="<%= member.getEmail() %>"><br>
    가입일: <%= member.getCreatedDate() %><br>
    <input type="submit" value="저장">
    <input type="button" value="삭제" onclick="location.href='delete?no=<%= member.getNo() %>';">
    <input type="button" value="취소" onclick="location.href='list'">
  </form>
</body>
</html>
