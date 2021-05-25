<%@ page isELIgnored="false" %> <%-- EL 문법 사용시 추가 필요 --%>
<%@ page
  contentType="text/html;charset=UTF-8"
  language="java"
  pageEncoding="UTF-8" %>
<!DOCTYPE html>
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  <title>회원 정보</title>
</head>
<body>
  <jsp:include page="/Header.jsp"/>
  <h1>회원 정보</h1>
  <%-- EL 문법 사용 --%>
  <form action="update.do" method="post">
    번호: <input type="text" name="no" value="${member.no}" readonly><br>
    이름: <input type="text" name="name" value="${member.name}"><br>
    이메일: <input type="text" name="email" value="${member.email}"><br>
    가입일: ${member.createdDate}<br>
    <input type="submit" value="저장">
    <input type="button" value="삭제" onclick="location.href='delete.do?no=${member.no}';">
    <input type="button" value="취소" onclick="location.href='list.do'">
  </form>
  <jsp:include page="/Tail.jsp"/>
</body>
</html>
