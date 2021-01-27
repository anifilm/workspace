/* 문제 05-7 [반복문 중첩의 활용]
문제 1
구구단의 짝수 단인 2, 4, 6, 8단만 출력하는 프로그램을 작성하되 2단은 2 x 2까지, 4단은 4 x 4까지,
6단은 6 x 6까지, 8단은 8 x 8까지 출력하도록 작성하자.
 */
class Q05_7_1 {
    public static void main(String[] args) {
        for (int i = 2; i < 10; i++) {
            if ((i % 2) != 0) continue;
            for (int j = 1; j < i + 1; j++) {
                System.out.println(i + " x " + j + " = " + (i * j));
            }
            System.out.println();
        }
    }
}
