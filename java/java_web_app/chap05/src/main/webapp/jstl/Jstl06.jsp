<%@ page isELIgnored="false" %> <%-- EL 문법 사용시 추가 필요 --%>
<%@ page import="java.util.ArrayList"%>
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
  <h2>c:forEach 태그</h2>

  <h3>반복문 - 배열</h3>
  <% pageContext.setAttribute("nameList",
    new String[]{"홍길동", "임꺽정", "일지매"}); %>
  <ul>
    <c:forEach var="name" items="${nameList}">
      <li>${name}</li>
    </c:forEach>
  </ul>

  <h3>반복문 - 배열의 시작 인덱스와 종류 인덱스 지정</h3>
  <% pageContext.setAttribute("nameList2",
    new String[]{"홍길동", "임꺽정", "일지매", "주먹대장", "똘이장군"}); %>
  <ul>
    <c:forEach var="name" items="${nameList2}" begin="2" end="3">
      <li>${name}</li>
    </c:forEach>
  </ul>

  <h3>반복문 - ArrayList 객체</h3>
  <%
  ArrayList<String> nameList3 = new ArrayList<String>();
  nameList3.add("홍길동");
  nameList3.add("임꺽정");
  nameList3.add("일지매");
  nameList3.add("주먹대장");
  nameList3.add("똘이장군");
  pageContext.setAttribute("nameList3", nameList3);
  %>
  <ul>
    <c:forEach var="name" items="${nameList3}">
      <li>${name}</li>
    </c:forEach>
  </ul>

  <h3>반복문 - 콤마로 구분된 문자열</h3>
  <% pageContext.setAttribute("nameList4", "홍길동,임꺽정,일지매,주먹대장,똘이장군"); %>
  <ul>
    <c:forEach var="name" items="${nameList4}">
      <li>${name}</li>
    </c:forEach>
  </ul>

  <h3>반복문 - 특정 횟수 만큼 반복</h3>
  <ul>
    <c:forEach var="no" begin="1" end="6">
      <li><a href="Jstl0${no}.jsp">JSTL 예제 ${no}</a></li>
    </c:forEach>
  </ul>

  <p><a href="Jstl05.jsp">[이전]</a><a href="Jstl07.jsp">[다음]</a></p>
</body>
</html>
