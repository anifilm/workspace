package chap14;

import java.util.StringTokenizer;

public class Ex09_StringTokenizer {
    public static void main(String[] args) {
        StringTokenizer str1 = new StringTokenizer("a b c");  // [1] 공백 기준 분할
    //  StringTokenizer str2 = new StringTokenizer("1,2,3", ",");  // [2]

        while (str1.hasMoreTokens()) {  // [3] 토큰 유무 확인
            System.out.println(str1.nextToken());  // [4]
        }
    }
}
