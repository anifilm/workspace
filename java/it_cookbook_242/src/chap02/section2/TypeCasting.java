package chap02.section2;

public class TypeCasting {
    public static void main(String[] args) {
        int i_num; byte b_num;

        i_num = 128;
        b_num = (byte)i_num;

        System.out.println(i_num + " " + b_num);
    }
}
