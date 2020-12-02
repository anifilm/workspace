/*
나 혼자 코딩!
비밀번호 예외 클래스 만들기
조금 전 실습한 사용자 정의 예외를 응용하여 PasswordException을 만들어 봅시다. 예외 상황은
비밀번호가 null인 경우, 문자열로만 이루어진 경우, 5자 이하인 경우입니다.

힌트 문자열로만 이루어졌는지 알아보려면 String의 matches() 메서드를 사용하면 됩니다.
	다음 사용법을 참고하세요.
 */
package chap14.standalone;

public class PasswordException extends IllegalArgumentException {
	public PasswordException(String message) {
		super(message);
	}
}
