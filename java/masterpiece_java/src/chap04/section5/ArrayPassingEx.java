// 인자로 배열이 전달되는 예
package chap04.section5;

public class ArrayPassingEx {
    static void replaceSpace(char a[]) {  // 배열 a의 공백 문자를 ','로 변경
        for (int i = 0; i < a.length; i++)
            if (a[i] == ' ') a[i] = ',';  // 공백 문자를 ','로 변경
    }

    static void printCharArray(char a[]) {
        for (int i = 0; i < a.length; i++)
            System.out.print(a[i]);  // 배열 요소 문자 출력
        System.out.println();  // 배열 요소 모두 출력 후 줄바꿈
    }

    public static void main(String[] args) {
        char c[] = {'T','h','i','s',' ','i','s',' ','a',' ','p','e','n','c','i','l','.'};
        printCharArray(c);  // 원래 배열 요소 출력
        replaceSpace(c);    // 공백 문자 바꾸기
        printCharArray(c);  // 수정된 배열 요소 출력
    }
}
