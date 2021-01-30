// Throwable 클래스와 예외처리의 책임 전가
class ExceptionMessage {
    public static void md1(int n) {
        md2(n , 0);  // 아래의 메서드 호출
    }
    public static void md2(int n1, int n2) {
        int r = n1 / n2;  // 예외 발생 지점
    }

    public static void main(String[] args) {
        md1(3);
        System.out.println("Good bye~~!");
    }
}
