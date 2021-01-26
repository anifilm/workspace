// 자바의 일반적인 상수
class Constants {
    public static void main(String[] args) {
        final int MAX_SIZE = 100;  // 상수 MAX_SIZE의 선언
        final char CONST_CHAR = '상';
        final int CONST_ASSIGNED;  // 상수 선언
        CONST_ASSIGNED = 12;       // 할당하지 않았던 상수의 값 할당 (값을 할당하지 않으면 한 번은 값을 할당 가능)
        System.out.println("상수1: " + MAX_SIZE);
        System.out.println("상수2: " + CONST_CHAR);
        System.out.println("상수3: " + CONST_ASSIGNED);
    }
}
