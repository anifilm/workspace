import java.util.Scanner;

class Exam10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("숫자를 입력하고 엔터를 치세요: ");
        int num = sc.nextInt();
        System.out.println("당신이 입력한 숫자는: " + num);
        sc.close();
    }
}
