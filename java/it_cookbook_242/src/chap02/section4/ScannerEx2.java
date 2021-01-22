package chap02.section4;
import java.util.Scanner;

public class ScannerEx2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        char ch;
        int num;

        System.out.print("Enter a character: ");
        ch = scanner.next().charAt(0);
        System.out.printf("It is %d in decimal.\n", (int)ch);

        System.out.print("Enter the same character again: ");
        num = scanner.nextInt();
        System.out.printf("It is %d in deciaml.\n", num);

        scanner.close();
    }
}
