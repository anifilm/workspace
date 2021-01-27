// 잘못된 재귀 메서드의 정의: 종료 조건이 없어요!
class InfRecul {
    public static void main(String[] args) {
        showHi(3);
    }

    public static void showHi(int cnt) {
        System.out.println("Hi~ ");
        if (cnt == 1)
            return;
    //  showHi(cnt--);  // cnt의 값이 전달된 다음에 cnt의 값이 감소하므로 무한 루프
        showHi(cnt - 1);
    }
}
