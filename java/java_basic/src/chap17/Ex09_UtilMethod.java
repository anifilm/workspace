package chap17;

public class Ex09_UtilMethod {
    public static void main(String[] args) {
        Integer n1 = Integer.valueOf(5);  // [1] 메서드 오버로딩
        Integer n2 = Integer.valueOf("1024");

        System.out.println("큰 수: " + Integer.max(n1, n2));  // [2]
        System.out.println("작은 수: " + Integer.min(n1, n2));  // [3]
        System.out.println("합: " + Integer.sum(n1, n2));  // [4]
        System.out.println();

        System.out.println("12의 2진 표현: 0B" + Integer.toBinaryString(12));  // [5]
        System.out.println("12의 8진 표현: 0" + Integer.toOctalString(12));  // [6]
        System.out.println("12의 16진 표현: 0x" + Integer.toHexString(12));  // [7]
    }
}
