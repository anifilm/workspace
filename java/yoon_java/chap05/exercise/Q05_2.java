/* 문제 05-2 [조건 연산자]
예제 CondOp.java를 조건 연산자를 사용하지 않고 대신에 if ~ else문을 사용하는 형태로 수정해 보자.
 */
class Q05_2 {
    public static void main(String[] args) {
        int num1 = 50;
        int num2 = 100;
        int big;
        int diff;

        if (num1 > num2)
            big = num1;
        else
            big = num2;
        System.out.println("큰 수: " + big);

        if (num1 > num2)
            diff = num1 - num2;
        else
            diff = num2 - num1;
        System.out.println("절대값: " + diff);
    }
}
