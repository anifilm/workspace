/* 문제 11-1 [String 클래스의 활용]
다음 주민등록 번호의 중간에 삽입된 - 를 지우고 공백으로 채워서 출력하는 프로그램을 작성해 보자.
  990925-1012999

 */
class Q11_1 {
    public static void main(String[] args) {
        String str1 = "990925-1012999";
        String str2, str3;

        str2 = str1.substring(0, 6);
        str3 = str1.substring(7);

        System.out.println(str2 + " " + str3);
    }
}
