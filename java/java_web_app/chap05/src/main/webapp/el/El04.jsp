<%@ page isELIgnored="false" %> <%-- EL 문법 사용시 추가 필요 --%>
<%@page import="java.util.ListResourceBundle"%>
<%@page import="java.util.ResourceBundle"%>
<%@page import="spms.vo.Member"%>
<%@page import="java.util.HashMap"%>
<%@page import="java.util.Map"%>
<%@page import="java.util.List"%>
<%@page import="java.util.LinkedList"%>
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
  <h2>예약된 키워드</h2>
  <table>
    <tr>
      <td>and</td>
      <td>or</td>
      <td>not</td>
      <td>eq</td>
    </tr>
    <tr>
      <td>ne</td>
      <td>lt</td>
      <td>gt</td>
      <td>le</td>
    </tr>
    <tr>
      <td>ge</td>
      <td>true</td>
      <td>false</td>
      <td>null</td>
    </tr>
    <tr>
      <td>instanceof</td>
      <td>empty</td>
      <td>div</td>
      <td>mod</td>
    </tr>
  </table>
  <%
    pageContext.setAttribute("ne", "오호라!");
  %>
  ${ne}
  <p><a href="El03.jsp">[이전]</a></p>
</body>
</html>
