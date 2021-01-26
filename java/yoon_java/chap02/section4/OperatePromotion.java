// short형 변수를 선언할까요? int형 변수를 선언할까요?
class OperatePromotion {
    public static void main(String[] args) {
        short num1 = 11;
        short num2 = 22;
    //  short result = num1 + num2;  // 자바는 정수형 연산을 4바이트 int형으로만 진행하며 대입시 자동 형 변환을
                                     // 하지 않으므로 명시적 형 변환을 지정하거나 int형으로 결과를 저장하여야 한다.
    //  short result = (short)(num1 + num2);
        int result = num1 + num2;
        System.out.println(result);
    }
}

/* 자바는 연산을 동반하는 상황에서의 변수는 int형으로 선언하는 것을 권장한다. */
