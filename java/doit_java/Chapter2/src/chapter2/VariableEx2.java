package chapter2;

public class VariableEx2 {
    public static void main(String[] args) {

        int num = 10;
        System.out.println(num);

        long num2 = 12345678900L;
        System.out.println(num2);
    }
}

/*

어딘가에 10이라는 값이 저장되어 있고 num 변수에 대입한다.
10이라는 값을 '리터럴' 또는 '리터럴 상수'라고 부른다.

정수형
byte    1 byte    8bit    (c언어의 char와 동일)
short   2 byte   16bit
int     4 byte   32bit
long    8 byte   64bit    리터럴 정수 뒤에 L 또는 l을 붙인다.

실수형
float   4 byte   32bit    리터럴 정수 뒤에 F 또는 f를 붙인다.
double  8 byte   64bit

문자형
char    2 byte   16bit    (문자형이 존재하는 것은 c언어와 다르다.)

논리형
boolean 1 byte

*/
