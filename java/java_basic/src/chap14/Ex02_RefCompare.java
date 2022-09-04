package chap14;

public class Ex02_RefCompare {
    public static void main(String[] args) {
        String str1 = new String("자바프로그래밍");
        String str2 = new String("자바프로그래밍");
        String str3 = "자바프로그래밍";
        String str4 = "자바프로그래밍";

        if (str1 == str2)  // [1]
            System.out.println("str1과 str2는 동일 객체 참조");
        else
            System.out.println("str1과 str2는 다른 객체 참조");  // [2]

        if (str3 == str4)  // [3]
            System.out.println("str3과 str4는 동일 객체 참조");  // [4]
        else
            System.out.println("str3과 str4는 다른 객체 참조");
    }
}
