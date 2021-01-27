/* 문제 05-4 [while문과 do ~ while문의 활용]
문제 2
1부터 100까지 출력하고 이어서 거꾸로 100에서 1까지 출력하는 프로그램을 작성해 보자. 가급적 while문과 do ~ while문을
한 번씩 사용해서 구현하자.
 */
class Q05_4_2 {
    public static void main(String[] args) {
        int n = 1;

        while (n <= 100) {
            System.out.print(n + " ");
            n++;
        }
        System.out.println();

        n = 100;
        do {
            System.out.print(n + " ");
            n--;
        } while (n >= 1);
        System.out.println();
    }
}
