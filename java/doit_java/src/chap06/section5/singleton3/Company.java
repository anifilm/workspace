// public 메서드 만들기
package chap06.section5.singleton3;

public class Company {
    private static Company instance = new Company();
    private Company() {}

    // 인스턴스를 외부에서 참조할 수 있도록 public get() 메서드 구현
    public static Company getInstance() {
        if (instance == null)
            instance = new Company();
        return instance;    // 유일하게 생성한 인스턴스 반환
    }
}
