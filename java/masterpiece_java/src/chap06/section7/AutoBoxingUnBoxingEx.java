// 박싱과 언박싱
package chap06.section7;

public class AutoBoxingUnBoxingEx {
    public static void main(String[] args) {
        int n = 10;
        Integer intObject = n;  // auto boxing
        System.out.println("intObject = " + intObject);

        int m = intObject + 10; // auto unboxing
        System.out.println("m = " + m);

        /*
        박싱(boxing)과 언박싱(unboxing)
        기본 형의 값을 Wrapper 객체로 변환하는 것을 박싱(boxing)이라 하고,
        반대의 경우를 언박싱(unboxing)이라고 한다.
         */

        Integer ten = 10;  // 자동 박싱. Integer ten = Integer.valueOf(10); 으로 자동 처리됨
        int t = ten;       // 자동 언박싱. int n = ten.intValue(); 로 자동 처리됨
    }
}
