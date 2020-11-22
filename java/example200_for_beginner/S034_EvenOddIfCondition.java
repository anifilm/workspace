// 034 if 조건문을 이용하여 짝·홀수 판별하기
public class S034_EvenOddIfCondition {
    public static void main(String[] args) {

        int temp = 99;

        if (temp % 2 == 0)      // 짝수이면
            temp = temp / 2;
        else
            temp = temp * 3 + 1;

        System.out.printf("계산후 = %d\n", temp);
    }
}
