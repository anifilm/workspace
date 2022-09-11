package chap18;

public class Ex03_Varargs {
    public static void helloEverybody(String... vargs) {  // [1] 가변 인수 표시
        for (String s : vargs) {  // [2] 가변 이수 사용
            System.out.print(s + "\t");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        helloEverybody("홍길동");
        helloEverybody("홍길동", "전우치");
        helloEverybody("홍길동", "전우치", "손오공");
    }
}
