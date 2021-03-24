<%--
  Created by IntelliJ IDEA.
  User: anifilm
  Date: 2021-03-13
  Time: 오후 9:59
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
  <title>계산기</title>
</head>
<body>
<h1>계산기</h1>
<form action="calc" method="post">
  <input type="text" name="v1" style="width: 50px;">
  <select name="op">
    <option value="+">+</option>
    <option value="-">-</option>
    <option value="*">*</option>
    <option value="/">/</option>
  </select>
  <input type="text" name="v2" style="width: 50px;">
  <input type="submit" value="=">
</form>
</body>
</html>
