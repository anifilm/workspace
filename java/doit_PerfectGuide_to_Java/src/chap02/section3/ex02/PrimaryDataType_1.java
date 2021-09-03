// 부울대수, 정수, 실수 값의 저장 및 출력
package chap02.section3.ex02;

public class PrimaryDataType_1 {
    public static void main(String[] args) {
        // boolean: true / false
        boolean bool1 = true;
        boolean bool2 = false;
        System.out.println(bool1);
        System.out.println(bool2);
        System.out.println();

        // 정수(byte, short, int, long): 음의 정수 / 0 / 양의 정수
        byte value1 = 10;
        short value2 = -10;
        int value3 = 100;
        long value4 = -100L; // long 자료형으로 인식
        System.out.println(value1);
        System.out.println(value2);
        System.out.println(value3);
        System.out.println(value4);
        System.out.println();

        // 실수(float, double): 음의 실수 / 0 / 양의 실수
        float value5 = 1.2f; // float 자료형으로 인식
        double value6 = -1.5;
        double value7 = 5; // 자동 타입 변환
        System.out.println(value5);
        System.out.println(value6);
        System.out.println(value7); // 실수값으로 출력
    }
}
