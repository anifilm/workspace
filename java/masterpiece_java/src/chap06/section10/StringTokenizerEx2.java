// StringTokenizer 클래스 매서드 활용
package chap06.section10;
import java.util.StringTokenizer;

public class StringTokenizerEx2 {
    public static void main(String[] args) {
        StringTokenizer st = new StringTokenizer("홍길동/장화/홍련/콩쥐/팥쥐", "/");  // 구분자로 '/' 사용

        while (st.hasMoreTokens())  // 토큰이 있는 동안
            System.out.println(st.nextToken());
    }
}

/*

StringTokenizer의 생성과 특징

하나의 문자열을 여러 개의 문자열로 분리하기 위하여 사용. 문자열을 분리할 때 사용되는 기준 문자를 구분 문자(delimiter)라고 하고
구분 문자로 분리된 문자열을 토큰(token)이라고 한다.


StringTokenizer 클래스 생성자

생성자                                        설명
StringTokenizer(String str)                  str 스트링의 각 문자를 구분 문자로 문자열을 분리하는 스트링 토크나이저 생성
StringTokenizer(String str, String delim)    str 스트링과 delim 구분 문자로 문자열을 분리하는 스트링 토크나이저 생성
StringTokenizer(String str, String delim, boolean returnDelims)    str 스트링과 delim 구분 문자로 문자열을 분리하는 스트링 토그나이저 생성.
                                                                   returnDelims가 true이면 delim이 포함된 문자도 토큰에 포함된다.

StringTokenizer 클래스 주요 메서드

메서드 설명
int countTokens()          스트링 토크나이저가 분리한 토큰의 개수 반환
boolean hasMoreTokens()    스트링 토크나이저에 다음 토큰이 있으면 true 반환
String nextToken()         스트링 토크나이저에 들어 있는 다음 토큰 반환

 */
