// try-with-resources문 사용하기 2
package chap14.section2.exception;

public class AutoCloseObjTest {
    public static void main(String[] args) {

        try (AutoCloseObj obj = new AutoCloseObj()) {
            throw new Exception();  // 강제 예외 발생
        } catch (Exception e) {
            System.out.println("예외 부분 입니다");
        }
    }
}
