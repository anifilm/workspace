/* 문제 06-2 [값을 반환하는 메서드의 정의]
문제 1
인자로 원의 반지름 정보를 전달하면, 원의 넓이를 계산해서 반환하는 메서드와 원의 둘레를 계산하는 메서드를 각각 정의하고,
이 둘을 호출하는 main 메서드를 정의하자.
 */
class Q06_2_1 {
    static final double PI = 3.141592;

    public static void main(String[] args) {
        int radius = 5;
        System.out.println("반지름 " + radius + "인 원의 넓이: " + circleArea(radius));
        System.out.println("반지름 " + radius + "인 원의 둘레: " + circleCircum(radius));
    }

    public static double circleArea(int radius) {
        return radius * radius * PI;
    }

    public static double circleCircum(int radius) {
        return radius * 2 * PI;
    }
}
