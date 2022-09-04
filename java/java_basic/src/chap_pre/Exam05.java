package chap_pre;

class Exam05 {
    public static void main(String[] args) {
        // 반복문: while, for
        System.out.println(2 * 1);
        System.out.println(2 * 2);
        System.out.println(2 * 3);
        System.out.println(2 * 4);
        System.out.println(2 * 5);
        System.out.println(2 * 6);
        System.out.println(2 * 7);
        System.out.println(2 * 8);
        System.out.println(2 * 9);
        System.out.println("====================");

        // 위의 반복에서 뒤의 자리 정수만 변하게 처리
        int num = 1;
        while (num < 10) {
            System.out.println(2 * num);
            num++;
        }
    }
}
