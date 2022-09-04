package chap06;

class Ex05_for {
    public static void main(String[] args) {
        for (int i = 2; i < 10; i++) {
            System.out.print((2 * i) + " ");
        }
        System.out.println();

        // 한 줄만 실행하면 중괄호를 생략 가능
        for (int i = 2; i < 10; i++)
            System.out.print((3 * i) + " ");
        System.out.println();

        // 같은 줄에 작성 가능. 실행 문장의 끝은 세미콜론(;)으로 구분.
        // 보통 이렇게 만들지는 않습니다.
        for (int i = 2; i < 10; i++) System.out.print((4 * i) + " ");
        System.out.println();

        // 의도치 않은 결과
        for (int i = 2; i < 10; i++)
            //System.out.println(i);  // i 변수의 값이 궁금해 출력
            System.out.print((5 * i) + " ");
        System.out.println();

    }
}
