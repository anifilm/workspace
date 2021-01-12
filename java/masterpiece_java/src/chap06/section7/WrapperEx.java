// wrapper 클래스 활용
package chap06.section7;

public class WrapperEx {
    public static void main(String[] args) {
        System.out.println(Character.toLowerCase('A'));  // 'A'를 소문자로 변환

        char c1 = '4', c2 = 'F';
        if (Character.isDigit(c1))  // 문자 c1이 숫자이면 true
            System.out.println(c1 + "는 숫자");
        if (Character.isAlphabetic(c2))  // 문자 c2가 영문자이면 true
            System.out.println(c2 + "는 영문자");

        System.out.println(Integer.parseInt("-123"));    // "-123"을 10진수로 변환
        System.out.println(Integer.toHexString(28));     // 정수 28을 2진수 문자열로 변환
        System.out.println(Integer.toBinaryString(28));  // 정수 28을 16진수 문자열로 변환
        System.out.println(Integer.bitCount(28));        // 정수 28에 대한 2진수의 1의 개수

        Double d = Double.valueOf(3.14);
        System.out.println(d.toString());  // Double을 문자열 "3.14"로 변환
        System.out.println(Double.parseDouble("3.14"));  // 문자열을 실수 3.14로 변환

        boolean b = (4 > 3);  // b는 true
        System.out.println(Boolean.toString(b));  // true를 문자열 "true"로 변환
        System.out.println(Boolean.parseBoolean("false"));  // 문자열을 false로 변환
    }
}

/*

Wrapper 클래스의 활용

Integer 클래스의 주요 메서드

메서드                           설명
static int bitCount(int i)      정수 i의 이진수 표현에서 1의 개수 반환
float floatValue()              float 형으로 값 반환
int intValue()                  int 형으로 값 반환
long longValue()                long 형으로 값 반환
short shortValue()              short 형으로 값 반환

static int parseInt(String s)               문자열 s를 10진 정수로 변환한 값 반환
static int prtseInt(String s, int radix)    문자열 s를 지정된 진법의 정수로 변환한 값 반환

static String toBinaryString(int i)         정수 i를  2진수 표현으로 변환한 문자열 반환
static String toHexString(int i)            정수 i를 16진수 표현으로 변환한 문자열 반환
static String toOctalString(int i)          정수 i를  8진수 표현으로 변환한 문자열 반환
static String toString(int i)               정수 i를 문자열로 변환하여 반환

static Integer valueOf(int i)               정수 i를 담은 Integer 객체 반환
static Integer valueOf(String s)            문자열 s를 정수로 변환하여 담고 있는 Integer 객체 반환


 */
