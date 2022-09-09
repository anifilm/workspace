package chap17;

public class Ex07_Number {
    public static void main(String[] args) {
    //  Integer num1 = new Integer(20);  // [1] 자바 4까지 문법
        Integer num1 = Integer.valueOf(20);  // [2] 자바 5부터 문법
        System.out.println(num1.intValue()); // [3]
        System.out.println(num1.doubleValue());

        Double num2 = Double.valueOf(3.14);
        System.out.println(num2.intValue());
        System.out.println(num2.doubleValue());
    }
}
