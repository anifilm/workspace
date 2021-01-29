// 배열을 대상으로 한 값의 저장과 참조, String형 배열에 문자열을 저장하고 참조하기
class StringArray {
    public static void main(String[] args) {
        String[] srr = new String[7];

        srr[0] = new String("Java");
        srr[1] = new String("System");
        srr[2] = new String("Compiler");
        srr[3] = new String("Park");
        srr[4] = new String("Tree");
        srr[5] = new String("Dinner");
        srr[6] = new String("Brunch Cafe");

        int cnum = 0;
        for (int i = 0; i < srr.length; i++)
            cnum += srr[i].length();

        System.out.println("총 문자의 수: " + cnum);
    }
}
