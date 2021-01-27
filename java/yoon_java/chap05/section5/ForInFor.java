// 많이 등장하는 for문의 중첩
class ForInFor {
    public static void main(String[] args) {
        for (int i = 0; i < 3; i++) {  // 바깥쪽 for문
            System.out.println("--------------------");
            for (int j = 0; j < 3; j++)  // 안쪽 for문
                System.out.print("[" + i + ", " + j + "] ");
            System.out.println();
        }
    }
}
