package chap06;

class Ex04_SwitchString {
    public static void main(String[] args) {
        String name = "홍길동";

        switch (name) {
            case "홍길동":
                System.out.println("제 이름은 홍길동입니다.");
                break;
            case "전우치":
                System.out.println("제 이름은 전우치입니다.");
                break;
            case "손오공":
                System.out.println("제 이름은 손오공입니다.");
                break;
            default:
                System.out.println("같은 이름이 없습니다.");
        }
    }
}
