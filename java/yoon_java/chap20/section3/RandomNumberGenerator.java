// 난수(Random Number)의 생성
import java.util.Random;

class RandomNumberGenerator {
    public static void main(String[] args) {
        Random rand = new Random();

        for (int i = 0; i < 7; i++)
            System.out.println(rand.nextInt(1000));  // 0이상 1000미만 난수 생성
    }
}
