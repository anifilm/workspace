// 031 상수의 묶음 클래스 enum 사용하기
public class S031_FruitMain {
    public static void main(String[] args) {

        S031_FRUIT apple = S031_FRUIT.APPLE;
        S031_FRUIT banana = S031_FRUIT.BANANA;
        S031_FRUIT mango = S031_FRUIT.MANGO;

        System.out.println(apple);
        System.out.println(apple.name());

        System.out.println(apple.ordinal());    // 선언될 때 순서 0
        System.out.println(banana.ordinal());   // 선언될 때 순서 1
        System.out.println(mango.ordinal());    // 선언될 때 순서 2

        S031_FRUIT[] fruits = S031_FRUIT.values();
        System.out.println(fruits[0]);
        System.out.println(fruits[1]);
        System.out.println(fruits[2]);
    }
}
