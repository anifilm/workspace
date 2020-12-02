/*
나 혼자 코딩!
비밀번호 예외 클래스 만들기
조금 전 실습한 사용자 정의 예외를 응용하여 PasswordException을 만들어 봅시다. 예외 상황은
비밀번호가 null인 경우, 문자열로만 이루어진 경우, 5자 이하인 경우입니다.

힌트 문자열로만 이루어졌는지 알아보려면 String의 matches() 메서드를 사용하면 됩니다.
	다음 사용법을 참고하세요.
 */
package chap14.standalone;

public class PasswordTest {
	private String password;

	public String getPassword(){
		return password;
	}

	public void setPassword(String password) throws PasswordException {
		if (password == null) {
			throw new PasswordException("비밀번호는 null 일 수 없습니다");
		}
		else if (password.length() < 5) {
			throw new PasswordException("비밀번호는 5자 이상 입니다");
		}
		else if (password.matches("[a-zA-Z]+")) {
			throw new PasswordException("비밀번호는 숫자를 포함해야 합니다.");
		}
		this.password = password;
	}

	public static void main(String[] args) {

		PasswordTest test = new PasswordTest();

		String password = null;
		try {
			test.setPassword(password);
			System.out.println("오류 없음1");
		} catch (PasswordException e) {
			System.out.println(e.getMessage());
		}

		password = "abcd";
		try {
			test.setPassword(password);
			System.out.println("오류 없음2");
		} catch (PasswordException e) {
			System.out.println(e.getMessage());
		}

		password = "abcde";
		try {
			test.setPassword(password);
			System.out.println("오류 없음3");
		} catch (PasswordException e) {
			System.out.println(e.getMessage());
		}

		password = "abcde1";
		try {
			test.setPassword(password);
			System.out.println("오류 없음4");
		} catch (PasswordException e) {
			System.out.println(e.getMessage());
		}
	}
}
