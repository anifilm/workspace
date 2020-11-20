// 인스턴스 생성하기
package singleton;

public class Company2 {
    private static Company2 instance = new Company2();    // 유일하게 생성한 인스턴스
    private Company2() {}
}