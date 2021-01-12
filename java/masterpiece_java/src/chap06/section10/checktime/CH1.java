/*
1. "냉장고,세탁기,에어컨,TV,오디오" 문자열을 ','로 분리하여 토큰을 출력하는 코드를 작성하라.

 */
package chap06.section10.checktime;

import java.util.StringTokenizer;

public class CH1 {
    public static void main(String[] args) {
        StringTokenizer st = new StringTokenizer("냉장고,세탁기,에어컨,TV,오디오", ",");  // 구분자로 ',' 사용

        while (st.hasMoreTokens())  // 토큰이 있는 동안
            System.out.println(st.nextToken());
    }
}
