// 인스턴스 생성하기
package chap06.section5.singleton2;

public class Company {
    private static Company instance = new Company();    // 유일하게 생성한 인스턴스
    private Company() {}
}
