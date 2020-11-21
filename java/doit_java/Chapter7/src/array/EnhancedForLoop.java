// 향상된 for문 사용하기
package array;

import java.util.Arrays;

public class EnhancedForLoop {
    public static void main(String[] args) {

        String[] strArray = {"Java", "Android", "C/C++", "C#", "Python"};

        for (String lang : strArray) {
            System.out.println(lang);
        }

        // 배열을 내용을 출력 Arrays.toString()
        System.out.println(Arrays.toString(strArray));
    }
}