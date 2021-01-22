package chap02.section2;

public class PrimitiveType {
    public static void main(String[] args) {
        System.out.printf("boolean is %d bit\n", 1);  // 1 bit, true or false
        System.out.printf("char is %d byte\n", Character.BYTES);  // 2 byte, Unicode
        System.out.printf("byte is %d byte\n", Byte.BYTES);    // 1 byte, -128 ~ 127
        System.out.printf("short is %d byte\n", Short.BYTES);  // 2 byte, -32768 ~ 32767
        System.out.printf("int is %d byte\n", Integer.BYTES);  // 4 byte, -2^31 ~ 2^31-1
        System.out.printf("long is %d byte\n", Long.BYTES);    // 8 byte, -2^63 ~ 2^63-1
        System.out.printf("float is %d byte\n", Float.BYTES);  // 4 byte, -3.4E38 ~ 3.4E38
        System.out.printf("double is %d byte\n", Double.BYTES);  // 8 byte, -1.7E308 ~ 1.7E308
        System.out.printf("\n");

        System.out.printf("int ranges from %d to %d\n", Integer.MIN_VALUE, Integer.MAX_VALUE);
        System.out.printf("double ranges from %e to %e\n", Double.MIN_VALUE, Double.MAX_VALUE);
    }
}
