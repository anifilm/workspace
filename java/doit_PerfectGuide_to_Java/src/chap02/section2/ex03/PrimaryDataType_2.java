// 문자값의 다양한 저장 방법 및 출력
package chap02.section2.ex03;

public class PrimaryDataType_2 {
    public static void main(String[] args) {
        // 문자로 저장하는 방법
        char value1 = 'A';
        char value2 = '가';
        char value3 = '3'; // 숫자 3이 아닌 문자 '3'을 가리킴

        System.out.println(value1);
        System.out.println(value2);
        System.out.println(value3);
        System.out.println();

        // 정수로 저장하는 방법
        char value4 = 65;
        char value5 = 0xac00;
        char value6 = 51;

        System.out.println(value4);
        System.out.println(value5);
        System.out.println(value6);
        System.out.println();

        // 유니코드로 직접 입력
        char value7 = '\u0041';
        char value8 = '\uac00';
        char value9 = '\u0033';

        System.out.println(value7);
        System.out.println(value8);
        System.out.println(value9);
    }
}
