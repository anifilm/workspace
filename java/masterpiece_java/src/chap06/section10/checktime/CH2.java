/*
2. StringTokenizer를 이용하여 문자열 "2+3+5+66+88+323"의 합을 계산하는 코드를 작성하라.

 */
package chap06.section10.checktime;

import java.util.StringTokenizer;

public class CH2 {
    public static void main(String[] args) {
        StringTokenizer st = new StringTokenizer("2+3+5+66+88+323", "+");  // 구분자로 '+' 사용
        int sum = 0;

        while (st.hasMoreTokens())  // 토큰이 있는 동안
            sum += Integer.parseInt(st.nextToken());

        System.out.println("st 문자열에 있는 숫자의 합은 " + sum);
    }
}
