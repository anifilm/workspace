// 배열의 복사
import java.util.Arrays;

class CopyOfArrays {
    public static void main(String[] args) {
        double[] arrOrg = {1.1, 2.2, 3.3, 4.4, 5.5};

        // 배열 전체를 복사
        double[] arrCpy1 = Arrays.copyOf(arrOrg, arrOrg.length);

        // 세 번째 요소까지만 복사
        double[] arrCpy2 = Arrays.copyOf(arrOrg, 3);

        for (double d : arrCpy1)
            System.out.print(d + "\t");
        System.out.println();

        for (double d : arrCpy2)
            System.out.print(d + "\t");
        System.out.println();
    }
}

/*

public static int[] copyOf(int[] original, int newLength)
  -> original에 전달된 배열을 첫 번째 요소부터 newLength의 길이만큼 복사

public static int[] copyOfRange(int[] original, int from, int to)
  -> original에 전달된 배열을 인덱스 from부터 to이전 요소까지 복사

 */
