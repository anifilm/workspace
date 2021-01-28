// 클래스 메서드로 정의하는 것이 더 나은 경우
class SimpleCalculator {
    static final double PI = 3.1415;

    static double add(double n1, double n2) {
        return n1 + n2;
    }
    static double sub(double n1, double n2) {
        return n1 - n2;
    }
    static double calCircleArea(double r) {
        return r * r * PI;
    }
    static double calCirclePeri(double r) {
        return r * 2 * PI;
    }
}

class UseCalculatorCMVer {
    public static void main(String[] args) {
        System.out.println("3 + 4 = " + SimpleCalculator.add(3, 4));
        System.out.println("반지름 2.2, 원의 넓이: " + SimpleCalculator.calCircleArea(2.2));
        System.out.println();

        System.out.println("15 - 7 = " + SimpleCalculator.sub(15, 7));
        System.out.println("반지름 5.0, 원의 둘레: " + SimpleCalculator.calCirclePeri(5.0));
    }
}
