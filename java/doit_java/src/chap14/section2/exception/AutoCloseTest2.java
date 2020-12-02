// 향상된 try-with-resources문 사용하기 (자바 9에서 추가된 문법)
package chap14.section2.exception;

public class AutoCloseTest2 {
	public static void main(String[] args) {

		AutoCloseObj obj = new AutoCloseObj();

		/* obj를 다른 참조 변수로 다시 선언해야 함
		try (AutoCloseObj obj2 = obj) {
			throw new Exception();
		} catch (Exception e) {
			System.out.println("예외 부분 입니다");
		}*/

		try (obj) {	// 외부에서 선언한 변수를 그대로 쓸 수 있음 (자바 9에서 추가된 문법)
			throw new Exception();
		} catch (Exception e) {
			System.out.println("예외 부분 입니다");
		}
	}
 }
