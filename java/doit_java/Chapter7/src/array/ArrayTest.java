// 배열 초기화하고 출력하기
package array;
import java.util.Arrays;

public class ArrayTest {
    public static void main(String[] args) {
        
        int[] num = new int[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        for (int i = 0; i < num.length; i++)
            System.out.println(num[i]);

        // 배열을 내용을 출력 Arrays.toString()
        System.out.println(Arrays.toString(num));
    }
}