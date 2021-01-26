// 증가 및 감소 연산자: Postfix ++, Postfix --
class PostfixOp {
    public static void main(String[] args) {
        int num = 5;
        System.out.print((num++) + " ");  // 출력 후에 값 증가
        System.out.print((num++) + " ");  // 출력 후에 값 증가
        System.out.println(num);

        System.out.print((num--) + " ");  // 출력 후에 값 감소
        System.out.print((num--) + " ");  // 출력 후에 값 감소
        System.out.println(num);
    }
}
