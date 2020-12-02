// 사용자 정의 예외 구현하기
package chap14.section4.exception;

public class IDFormatException extends Exception {
	public IDFormatException(String message) {	// 생성자의 매개변수로 예외 상황 메시지를 받음
		super(message);
	}
}
