// 씨드(Seed) 기반의 난수 생성
import java.util.Random;

class SeedSetRandom {
    public static void main(String[] args) {
        Random rand = new Random(System.currentTimeMillis());

        for (int i = 0; i < 7; i++)
            System.out.println(rand.nextInt(1000));  // 0이상 1000미만 난수 생성
    }
}
