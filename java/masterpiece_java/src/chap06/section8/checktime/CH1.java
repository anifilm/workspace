/*
1. "My name is Tom."에 포함된 공백 문자의 개수를 세는 코드 부분만 간단히 작성하라.

 */
package chap06.section8.checktime;

public class CH1 {
    public static void main(String[] args) {
        String str = "My name is Tom.";
        int count = 0;

        for (int i = 0; i < str.length(); i++)
            if (str.charAt(i) == ' ') count++;

        System.out.println("\"" + str + "\" 에 포함된 공백 문자의 개수는 " + count);
    }
}
