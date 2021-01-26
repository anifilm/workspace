// 비트 시프트(Shift) 연산자: <<, >>, >>>
class BitShiftOp {
    public static void main(String[] args) {
        byte num;

        num = 2;   // 0000 0010
        System.out.print((byte)(num << 1) + "\t");  // 0000 0100 (4)
        System.out.print((byte)(num << 2) + "\t");  // 0000 1000 (8)
        System.out.print((byte)(num << 3) + "\n");  // 0001 0000 (16)

        num = 8;   // 0000 1000
        System.out.print((byte)(num >> 1) + "\t");  // 0000 0100 (4)
        System.out.print((byte)(num >> 2) + "\t");  // 0000 0010 (2)
        System.out.print((byte)(num >> 3) + "\n");  // 0000 0001 (1)

        num = -8;  // 1111 1000
        System.out.print((byte)(num >> 1) + "\t");  // 1111 1100 (-4)
        System.out.print((byte)(num >> 2) + "\t");  // 1111 1110 (-2)
        System.out.print((byte)(num >> 3) + "\n");  // 1111 1111 (-1)
    }
}
