// 씨드(Seed) 기반의 난수 생성
import java.util.Random;

class PseudoRandom {
    public static void main(String[] args) {
        Random rand = new Random(12);  // 생성자로 씨드 값(Seed Number) 전달

        for (int i = 0; i < 7; i++)
            System.out.println(rand.nextInt(1000));  // 0이상 1000미만 난수 생성
    }
}
