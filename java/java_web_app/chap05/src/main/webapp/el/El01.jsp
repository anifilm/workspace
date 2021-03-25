<%@ page isELIgnored="false" %> <%-- EL 문법 사용시 추가 필요 --%>
<%@ page import="spms.vo.Member" %>
<%@ page import="java.util.HashMap" %>
<%@ page import="java.util.Map" %>
<%@ page import="java.util.List" %>
<%@ page import="java.util.LinkedList" %>
<%@ page
  language="java"
  contentType="text/html; charset=UTF-8"
  pageEncoding="UTF-8" %>
<!DOCTYPE html>
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  <title>EL(Expression Language)</title>
  <style type="text/css">
    body {
      font-size: small;
    }
    table {
      border: thin solid gray;
      border-collapse: collapse;
    }
    td, th {
      border: thin dotted gray;
      padding: 2px;
    }
    th {
      background-color: lightgray;
    }
    pre {
      font-size: 90%;
    }
  </style>
</head>
<body>
  <h2>EL - 리터럴 표현식</h2>
  <table>
    <tr>
      <th>데이터 형</th>
      <th>EL 코드</th>
      <th>실행 결과</th>
    </tr>
    <tr>
      <td>문자열</td>
      <td>\${"test"}</td>
      <td>${"test"}</td>
    </tr>
    <tr>
      <td>문자열</td>
      <td>\${'test'}</td>
      <td>${'test'}</td>
    </tr>
    <tr>
      <td>정수</td>
      <td>\${20}</td>
      <td>${20}</td>
    </tr>
    <tr>
      <td>부동소수점</td>
      <td>\${3.14}</td>
      <td>${3.14}</td>
    </tr>
    <tr>
      <td>불리언</td>
      <td>\${true}</td>
      <td>${true}</td>
    </tr>
    <tr>
      <td>널 값</td>
      <td>\${null}</td>
      <td>${null}</td>
    </tr>
  </table>
  <p><a href="El02.jsp">[다음]</a></p>
</body>
</html>
