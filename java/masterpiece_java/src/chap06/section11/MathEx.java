// Math 클래스 메서드 활용
package chap06.section11;

public class MathEx {
    public static void main(String[] args) {
        double a = 3.14;
        System.out.println(Math.PI);  // 원주율 상수 출력
        System.out.println(Math.ceil(a));  // ceil(올림)
        System.out.println(Math.floor(a));  // floor(올림)
        System.out.println(Math.sqrt(9));  // 제곱근
        System.out.println(Math.exp(2));  // e의 2승
        System.out.println(Math.round(3.14));  // 반올림

        // [1, 45] 사이의 정수형 난수 6개 발생
        System.out.print("이번주 행운의 번호는 ");
        for (int i = 0; i < 6; i++)
            System.out.print((int)(1 + Math.random() * 45) + " ");  // 난수 발생
    }
}

/*

Math 클래스의 주요 메서드

메서드      설명
static double abs(double a)             실수 a의 절대값 반환
static double cos(double a)             실수 a의 cosine 값 반환
static double sin(double a)             실수 a의 sine 값 반환
static double tan(double a)             실수 a의 tangent 값 반환
static double exp(double a)             e의 a 제곱 값 반환
static double ceil(double a)            올림. 실수 a보다 크거나 같은 수 중에서 가장 작은 정수를 실수 형으로 반환
static double floor(double a)           내림. 실수 a보다 작거나 같은 수 중에서 가장 큰 정수를 실수 형으로 반환
static double max(double a, double b)   두 수 a, b 중에서 큰 수 반환
static double min(double a, double b)   두 수 a, b 중에서 작은 수 반환
static double random()                  0.0보다 크거나 같고 1.0보다 작은 임의의 실수 반환
static lone round(double a)             반올림. 실수 a를 소수 첫째 자리에서 반올림한 정수를 long 형으로 반환
static double sqrt(double a)            실수 a의 제곱근 반환

 */
