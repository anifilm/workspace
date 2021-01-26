/* 문제 01-1 [클래스의 이름과 문자열의 출력]
문제 2
다음 두 문장의 출력 결과를 확인하는 프로그램을 작성해 보자.
  System.out.println("2 + 5 = " + 2 + 5);
  System.out.println("2 + 5 = " + (2 + 5));

 */
class Test01_1_2 {
    public static void main(String[] args) {
        System.out.println("2 + 5 = " + 2 + 5);  // 2와 5를 문자열 형식으로 그대로 출력 "25"
        System.out.println("2 + 5 = " + (2 + 5));  // 2 + 5를 연산하여 결과 출력 7
    }
}
