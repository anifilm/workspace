// 문자열 생성을 위한 두 가지 방법의 차이점은?
class ImmutableString {
    public static void main(String[] args) {
        String str1 = "Simple String";
        String str2 = "Simple String";

        String str3 = new String("Simple String");
        String str4 = new String("Simple String");

        if (str1 == str2)
            System.out.println("str1과 str2는 같은 인스턴스를 참조");
        else
            System.out.println("str1과 str2는 다른 인스턴스를 참조");

        if (str3 == str4)
            System.out.println("str3과 str4는 같은 인스턴스를 참조");
        else
            System.out.println("str3과 str4는 다른 인스턴스를 참조");
    }
}
