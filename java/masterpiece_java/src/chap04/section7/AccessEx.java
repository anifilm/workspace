// 멤버의 접근 지정자
package chap04.section7;

class Sample {
    public int a;
    private int b;
    int c;  // 디폴트 접근 지정
}

public class AccessEx {
    public static void main(String[] args) {
        Sample sample = new Sample();
        sample.a = 10;
    //  sample.b = 10;  // priavate 멤버 변수이므로 직접 접근 불가
        sample.c = 10;
    }
}
