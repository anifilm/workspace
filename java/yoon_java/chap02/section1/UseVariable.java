// 변수(Variable)는 메모리 공간에 붙여진 이름
class UseVariable {
    public static void main(String[] args) {
        int num1;   // 변수 num1의 선언
        num1 = 10;  // 변수 num1에 10을 저장

        int num2 = 10;  // 변수 num2 선언과 동시에 20으로 초기화
        int num3 = num1 + num2;  // 두 변수 값을 대상으로 덧셈
        System.out.println(num1 + " + " + num2 + " = " + num3);
    }
}
