// 035 삼항연산자를 이용하여 짝·홀수 판별하기
public class S035_EvenOddTriCondition {
    public static void main(String[] args) {

        int temp = 99;

        temp = (temp % 2 == 0) ? temp / 2 : temp * 3 + 1;

        System.out.printf("계산후 = %d\n", temp);
    }
}
