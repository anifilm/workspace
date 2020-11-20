// 단락 회로 평가 실습하기
package operator;

public class OperationEx3 {
    public static void main(String[] args) {

        int num1 = 10;
        int i = 2;

        boolean value = ((num1 = num1 + 10) < 10) && ((i = 1 + 2) < 10);

        System.out.println(value);
        System.out.println(num1);
        System.out.println(i);      // 논리 곱에서 앞 항이 거짓이면 뒷 항이 실행되지 않아 i 값은 그대로

        value = ((num1 = num1 + 10) > 10) || ((i = i + 2) < 10);

        System.out.println(value);
        System.out.println(num1);
        System.out.println(i);      // 논리 합에서 앞 항이 참이면 뒷 항이 실행되지 않아 i 값은 그대로
    }
}

/*

논리 연산에서 모든 항이 실행되지 않는 경우 - 단락 회로 평가

논리 곱 (&&)
false && true (앞이 false 이기 때문에 뒷 항을 평가하지 않는다.)

논리 합 (||)
true || false (앞이  true 이기 때문에 뒷 항을 평가하지 않는다.)

 */