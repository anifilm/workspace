/* 문제 05-6 [continue문과 break문의 활용]
문제 1
예제 ContinueBasic.java에 존재하는 while문을 for문으로 변경해 보자.
 */
class Q05_6_1 {
    public static void main(String[] args) {
        int count = 0;

        for (int num = 1; num < 100; num++) {
            if ((num % 5) != 0 || (num % 7) != 0)
                continue;  // 5와 7의 배수가 아니라면 나머지 건너뛰고 위로 이동

            // 5와 7의 배수인 경우만 실행
            count++;
            System.out.println(num);
        }

        System.out.println("count: " + count);
    }
}
