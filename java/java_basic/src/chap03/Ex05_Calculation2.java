package chap03;

class Ex05_Calculation2 {
    public static void main(String[] args) {
        int num31 = 1;
        int num32 = 2;
        int result1 = num31 + num32;

        long num41 = 1;
        long num42 = 2;
        long result4 = num41 + num42;

        long result5 = num31 + num41;  // 자동 형변환

        float num61 = 1.0f;
        float num62 = 2.0f;
        float result6 = num61 + num62;

        double num71 = 1.0;
        double num72 = 2.0;
        double result7 = num71 + num72;

        double result8 = num61 + num71;  // 자동 형변환
    }
}
