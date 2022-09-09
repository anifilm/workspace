package chap17;

public class Ex08_parseXXX {
    public static void main(String[] args) {
        String str = "100";
        int a = Integer.parseInt(str);  // [1] 형변환
        double b = Double.parseDouble("3.14");  // [2] 형변환

        System.out.println(a + " : " + b);
    }
}
