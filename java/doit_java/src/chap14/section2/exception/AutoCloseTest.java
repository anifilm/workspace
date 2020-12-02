// try-with-resources문 사용하기 1
package chap14.section2.exception;

public class AutoCloseTest {
	public static void main(String[] args) {

		try (AutoCloseObj obj = new AutoCloseObj()) {
		} catch (Exception e) {
			System.out.println("예외 부분 입니다");
		}
	}
}
