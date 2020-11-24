package interfaceex.staticex;

public class CompleteCalc extends Calculator {
    @Override
    public int times(int num1, int num2) {
        System.out.print(num1 + " * " + num2 + " = ");
        return num1 * num2;
    }

    @Override
    public int divide(int num1, int num2) {
        if (num2 != 0) {
            System.out.print(num1 + " / " + num2 + " = ");
            return num1 / num2;
        } else
            return ERROR;  // 나누는 수가 0인 경우 오류 반환
    }

    public void showInfo() {
        System.out.println("Calc 인터페이스를 구현 하였습니다.");
    }
}
