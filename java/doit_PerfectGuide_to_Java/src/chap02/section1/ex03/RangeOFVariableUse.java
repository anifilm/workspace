// 변수의 생존 기간
package chap02.section1.ex03;

public class RangeOFVariableUse {
    public static void main(String[] args) {
        int value1 = 3; // 변수 value1 생성
        {
            int value2 = 5; // 변수 value2 생성
            System.out.println(value1);
            System.out.println(value2);
        } // 변수 value2 소멸 시점

        System.out.println(value1);
        // System.out.println(value2); // 오류
    } // 변수 value1 소멸 시점
}
