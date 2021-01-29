// StringBuilder 클래스
class ReturnStringBuilder {
    public static void main(String[] args) {
        StringBuilder stb1 = new StringBuilder("123");
        StringBuilder stb2 = stb1.append(45678);  // 같은 인스턴스 객체를 참조하게 된다.

        System.out.println(stb1.toString());  // "12345678"
        System.out.println(stb2.toString());  // "12345678"

        // 인덱스 0부터 5이전 까지의 문자를 삭제
        stb2.delete(0, 5);

        System.out.println(stb1.toString());  // "678"
        System.out.println(stb2.toString());  // "678"

        // 참조 값의 비교
        if (stb1 == stb2)
            System.out.println("같은 인스턴스 참조");
        else
            System.out.println("다른 인스턴스 참조");
    }
}
