// 다른 이름의 메서드를 만들어 보자.
class MethodDef {
    public static void main(String[] args) {
        System.out.println("프로그램의 시작");
        hiEveryone(12);  // 12를 전달하여 hiEveryone 호출
        hiEveryone(13);  // 13를 전달하여 hiEveryone 호출
        System.out.println("프로그램의 끝");
    }

    public static void hiEveryone(int age) {
        System.out.println("좋은 아침입니다.");
        System.out.println("제 나이는 " + age + "세 입니다.");
    }
}
