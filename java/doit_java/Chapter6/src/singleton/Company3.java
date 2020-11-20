// public 메서드 만들기
package singleton;

public class Company3 {
    private static Company3 instance = new Company3();
    private Company3() {}

    // 인스턴스를 외부에서 참조할 수 있도록 public get() 메서드 구현
    public static Company3 getInstance() {
        if (instance == null)
            instance = new Company3();
        return instance;    // 유일하게 생성한 인스턴스 반환
    }
}