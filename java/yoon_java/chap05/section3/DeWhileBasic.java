// 반복문 2: do ~ while문
class DeWhileBasic {
    public static void main(String[] args) {
        int num = 0;

        do {
            System.out.println("I like Java " + num);
            num++;
        } while (num < 5);  // num < 5를 만족하는 동안 반복 실행 (조건이 true인 동안 반복)
    }
}
