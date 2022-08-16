class Ex04_Calculation1 {
    public static void main(String[] args) {
        byte num11 = 1;
        byte num12 = 2;
        byte result1 = num11 + num12;  // 오류

        short num21 = 1;
        short num22 = 2;
        short result21 = num21 + num22;  // 오류

        short result22 = (short)(num21 + num22);
    }
}
