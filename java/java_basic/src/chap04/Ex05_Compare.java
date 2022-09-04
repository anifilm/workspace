package chap04;

class Ex05_Compare {
    public static void main(String[] args) {
        System.out.println("2 >= 1 : " + (2 >= 1));
        System.out.println("2 <= 1 : " + (2 <= 1));

        // 비교 연산시에도 형 변환이 일어남
        System.out.println("1.0 == 1 : " + (1.0 == 1));
        System.out.println("1.0 != 1 : " + (1.0 != 1));
    }
}
