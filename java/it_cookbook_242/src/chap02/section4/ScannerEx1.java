package chap02.section4;
import java.util.Scanner;

public class ScannerEx1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int age;
        double weight, height;

        System.out.print("Enter age: ");
        age = scanner.nextInt();

        System.out.printf("Age: %d\n", age);

        System.out.print("Enter height and weight: ");
        height = scanner.nextDouble();
        weight = scanner.nextDouble();
        System.out.printf("Height: %f, Weight: %f\n", height, weight);

        scanner.close();
    }
}
