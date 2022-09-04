public class Ex03_CircleUsing {
    public static void main(String[] args) {
        com.company.area.Circle c1 = new com.company.area.Circle(3.5);  // [1]
        System.out.println("반지름 3.5 원 넓이: " + c1.getArea());

        com.company.circumference.Circle c2 = new com.company.circumference.Circle(3.5);  // [2]
        System.out.println("반지름 3.5 원 둘레: " + c2.getCircumference());
    }
}
