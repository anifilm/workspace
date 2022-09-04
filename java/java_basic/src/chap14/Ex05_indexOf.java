package chap14;

public class Ex05_indexOf {
    public static void main(String[] args) {
        String str = "AppleBananaOrange";
        int num1 = str.indexOf("a");  // [1] "a" 위치 반환
        int num2 = str.indexOf("a", num1 + 1); // [2] 첫 "a" 그 다음 "a" 위치 반환

        System.out.println(num1);
        System.out.println(num2);
    }
}
