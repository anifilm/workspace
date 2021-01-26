// 비트 연산자: &, |, ^, ~
class BitOperator {
    public static void main(String[] args) {
        byte n1 = 5;   // 0000 0101
        byte n2 = 3;   // 0000 0011
        byte n3 = -1;  // 1111 1111

        byte r1 = (byte)(n1 & n2);  // 0000 0001, bit AND
        byte r2 = (byte)(n1 | n2);  // 0000 0111, bit OR
        byte r3 = (byte)(n1 ^ n2);  // 0000 0110, bit XOR
        byte r4 = (byte)(~n3);      // 0000 0000, bit NOT

        System.out.println(r1);     // 0000 0001 (1)
        System.out.println(r2);     // 0000 0111 (7)
        System.out.println(r3);     // 0000 0110 (6)
        System.out.println(r4);     // 0000 0000 (0)
    }
}
