/* 문제 06-3 [재귀 메서드의 정의]
문제 2
인자로 십진수 정수를 전달받아서 이에 해당하는 이진수 표현을 출력하는 메서드를 재귀의 형태로 정의하고, 이를 호출하는
main 메서드를 정의해 보자.
 */
class Q06_3_2 {
    public static void main(String[] args) {
        int num = 8;
        System.out.print(num + "의 이진수 표현: ");
        toBinary(num);
        System.out.println();

        num = 12;
        System.out.print(num + "의 이진수 표현: ");
        toBinary(num);
        System.out.println();
    }

    public static void toBinary(int decimal) {
        if (decimal == 0) {
            return;
        }
        int bin = decimal % 2;
        decimal /= 2;
        System.out.print(0);
        toBinary(decimal);
        System.out.print(bin);
    }
}
