// 중첩된 반복문을 한 번에 빠져나오는 방법: 레이블을 설정하는 break문
class BreakPoint {
    public static void main(String[] args) {
        for (int i = 1; i < 10; i++) {
            for (int j = 1; j < 10; j++) {
                if ((i * j) == 72) {
                    System.out.println(i + " x " + j + " = " + (i * j));
                    break;
                }
            }
        }
    }
}
