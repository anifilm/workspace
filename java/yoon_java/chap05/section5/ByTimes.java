// 많이 등장하는 for문의 중첩
class ByTimes {
    public static void main(String[] args) {
        for (int i = 2; i < 10; i++) {  // 2단 부터 9단까지 진행 위한 바깥쪽 for문
            for (int j = 1; j < 10; j++)  // 1부터 9까지의 곱을 위한 안쪽 for문
                System.out.println(i + " x " + j + " = " + (i * j));
            System.out.println();
        }
    }
}
