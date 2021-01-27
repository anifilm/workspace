/* 문제 05-7 [반복문 중첩의 활용]
문제 2
다음 식을 만족하는 모든 A와 B의 조합을 구하는 프로그램을 작성하자.
    A B
  + B A
  -----
    9 9

 */
class Q05_7_2 {
    public static void main(String[] args) {
        for (int i = 10; i < 100; i++) {
            for (int j = 10; j < 100; j++) {
                if ((i + j) == 99) {
                    if ((i / 10 == j % 10) && (i % 10 == j / 10))
                        System.out.println(i + " + " + j + " = 99");
                }
            }
        }
    }
}
