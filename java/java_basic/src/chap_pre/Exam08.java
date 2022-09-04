package chap_pre;

class Exam08 {
    public static void main(String[] args) {
        int num = 0;
        while (true) {
            num++;

            // 짝수이면 이후 실행을 건너뛰기
            if (num % 2 == 0) {
                continue;
            }

            // 특정한 조건이 되면 멈추기
            if (num > 10) {
                break;
            }

            System.out.println(num);
        }

        // break로 멈추면 여기로 실행 이동
        System.out.println("while문 종료");
    }
}
