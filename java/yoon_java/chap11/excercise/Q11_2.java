/* 문제 11-2 [String 클래스의 활용]
다음 주민등록 번호의 중간에 삽입된 - 를 지우고 공백으로 채워서 출력하는 프로그램을 작성해 보자.
단 StringBuilder 클래스를 활용하여 빈번한 문자열의 생성이 발생하지 않도록 해야 한다.
  990925-1012999

 */
class Q11_2 {
    public static void main(String[] args) {
        StringBuilder stb = new StringBuilder("990925-1012999");

        stb.replace(6, 7, " ");
        System.out.println(stb.toString());
    }
}
