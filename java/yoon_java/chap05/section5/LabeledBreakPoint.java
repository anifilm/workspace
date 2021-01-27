// 중첩된 반복문을 한 번에 빠져나오는 방법: 레이블을 설정하는 break문
class LabeledBreakPoint {
    public static void main(String[] args) {
outer:  for (int i = 1; i < 10; i++) {  // 바깥쪽 for문에 레이블 outer 명시
            for (int j = 1; j < 10; j++) {
                if ((i * j) == 72) {
                    System.out.println(i + " x " + j + " = " + (i * j));
                    break outer;  // outer로 명시된 반복문까지 빠져나간다.
                }
            }
        }
    }
}
