/*
4. 다음 중 String 객체 생성 방법으로 잘못된 것은?

 */
package chap06.section8.checktime;

public class CH4 {
    public static void main(String[] args) {
        char[] data = {'a', 'b', 'c', 'd'};
        String str1 = new String(data);
        String str2 = "abcd";
        String str3 = new String(str1);
    //  String str4 = 'a';  // 문자열만 저장 가능
        String str4 = "a";
    }
}
