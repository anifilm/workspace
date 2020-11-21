// 배열 길이만큼 출력하기
package array;
import java.util.Arrays;

public class ArrayTest2 {
    public static void main(String[] args) {
        
        double[] data = new double[5];      // double 형으로 길이 5인 배열 선언

        // 각 요소에 값을 할당
        data[0] = 10.0;
        data[1] = 20.0;
        data[2] = 30.0;

        // data.length (data 배열의 길이를 알 수 있다)
        for (int i = 0; i < data.length; i++)
            System.out.println(data[i]);

        // 배열을 내용을 출력 Arrays.toString()
        System.out.println(Arrays.toString(data));
    }
}