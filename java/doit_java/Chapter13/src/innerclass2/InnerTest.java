// 정적 내부 클래스 예제
package innerclass2;

class OutClass {                    // 외부 클래스
    private int num = 10;           // 외부 클래스 private 변수
    private static int sNum = 20;   // 외부 클래스 정적 변수

    static class InStaticClass {    // 정적 내부 클래스
        int inNum = 100;            // 정적 내부 클래스의 인스턴스 변수
        static int sInNum = 200;    // 정적 내부 클래스의 정적 변수

        // 정적 내부 클래스의 일반 메서드
        void inTest() {
        //  num += 10;    // 외부 클래스의 인스턴스 변수는 사용할 수 없다
            System.out.println("InStaticClass inNum = " + inNum + " (내부 클래스의 인스턴스 변수 사용)");
            System.out.println("InStaticClass sInNum = " + sInNum + " (내부 클래스의 정적 변수 사용)");
            System.out.println("OutClass sNum = " + sNum + " (외부 클래스의 정적 변수 사용)");
        }
        // 정적 내부 클래스의 정적 메서드
        static void sTest() {
        //  num += 10;    // 외부 클래스의 인스턴스 변수는 사용할 수 없다
        //  inNum += 10;  // 내부 클래스의 인스턴스 변수도 사용할 수 없다
            System.out.println("InStaticClass sInNum = " + sInNum + " (내부 클래스의 정적 변수 사용)");
            System.out.println("OutClass sNum = " + sNum + " (외부 클래스의 정적 변수 사용)");
        }
    }
}

public class InnerTest {
    public static void main(String[] args) {

        // 외부 클래스를 생성하지 않고 바로 정적 내부 클래스 생성 가능
        OutClass.InStaticClass sInClass = new OutClass.InStaticClass();

        System.out.println("정적 내부 클래스 일반 메서드 호출");
        sInClass.inTest();
        System.out.println();

        System.out.println("정적 내부 클래스의 정적 메서드 호출");
        OutClass.InStaticClass.sTest();
    }
}

/*

정적 내부 클래스 메서드               변수 유형                  사용 가능 여부

                        외부 클래스의 인스턴스 변수 (num)             X
일반 메서드               외부 클래스의 정적 변수 (sNum)               O
void inTest()           정적 내부 클래스의 인스턴스 변수 (inNum)       O
                        정적 내부 클래스의 정적 변수 (sinNum)         O

                        외부 클래스의 인스턴스 변수 (num)             X
정적 메서드               외부 클래스의 정적 변수 (sNum)               O
static void sTest()     정적 내부 클래스의 인스턴스 변수 (inNum)       X
                        정적 내부 클래스의 정적 변수 (sinNum)         O

예제와 표에서 알수 있듯이 정적 내부 클래스에서 사용하는 메서드가 정적 메서드인 경우에는 외부
클래스와 정적 내부 클래스에 선언된 변수 중 정적 변수만 사용할 수 있습니다.

 */
