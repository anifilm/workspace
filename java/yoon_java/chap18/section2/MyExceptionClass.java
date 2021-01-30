// 프로그래머가 정의하는 예외
import java.util.Scanner;

class ReadAgeException extends Exception {
    public ReadAgeException() {
        super("유효하지 않은 나이가 입렫되었습니다.");
    }
}

class MyExceptionClass {
    public static void main(String[] args) {
        System.out.println("나이 입력: ");

        try {
            int age = readAge();
            System.out.printf("입력된 나이: %d\n", age);
        }
        catch (ReadAgeException e) {
            System.out.println(e.getMessage());
        }
    }

    public static int readAge() throws ReadAgeException {
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();

        if (age < 0)
            throw new ReadAgeException();  // 예외 발생

        return age;
    }
}
