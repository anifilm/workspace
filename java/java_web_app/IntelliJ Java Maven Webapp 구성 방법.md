IntelliJ Java Maven Webapp 설정 방법

1. New Project

2. Maven
    [V] Create from archtype -> 활성화

    mavan-archetype-webapp 선택

3. 프로젝트명 지정

4. Maven home path 지정
    .../maven/apache-maven-3.6.3 선택

[프로젝트 생성]


5. pom.xml dependency 추가

- 서블릿
    <dependency>
      <groupId>javax.servlet</groupId>
      <artifactId>javax.servlet-api</artifactId>
      <version>4.0.1</version>
      <scope>provided</scope>
    </dependency>

- JSTL
    <dependency>
      <groupId>javax.servlet.jsp.jstl</groupId>
      <artifactId>javax.servlet.jsp.jstl-api</artifactId>
      <version>1.2.2</version>
    </dependency>
    <dependency>
      <groupId>org.glassfish.web</groupId>
      <artifactId>javax.servlet.jsp.jstl</artifactId>
      <version>1.2.5</version>
    </dependency>
    <dependency>
      <groupId>org.apache.taglibs</groupId>
      <artifactId>taglibs-standard-impl</artifactId>
      <version>1.2.5</version>
    </dependency>

- mysql
    <dependency>
      <groupId>mysql</groupId>
      <artifactId>mysql-connector-java</artifactId>
      <version>8.0.23</version>
    </dependency>

- 파일 업로드
    <dependency>
      <groupId>commons-fileupload</groupId>
      <artifactId>commons-fileupload</artifactId>
      <version>1.4</version>
    </dependency>

- DBCP2 (chap05, 5.13.3 DataSource의 적용)
    <dependency>
      <groupId>org.apache.commons</groupId>
      <artifactId>commons-dbcp2</artifactId>
      <version>2.8.0</version>
    </dependency>


[파일 수정 후]


6. pom.xml 오른 클릭 -> Maven -> Reload project 선택

7. src/main 오른 클릭 -> New -> Directory -> java 폴더 생성

8. Add Configuration...
    + 추가
    Tomcat Server -> Local 선택

    VM options: -Dfile.encoding=UTF-8

    Deployment 탭 선택

    + 추가
    Artifact... -> chap01:wap exploded 선택

    Application context: /chap01

