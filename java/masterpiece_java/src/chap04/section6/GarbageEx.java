// 가비지의 발생
package chap04.section6;

public class GarbageEx {
    public static void main(String[] args) {
        String a = new String("Good");
        String b = new String("Bad");
        String c = new String("Normal");
        String d, e;
        a = null;  // a에 할당되었던 "Good" 객체가 가비지가 된다.
        d = c;     // c에 할당된 "Normal" 객체의 주소를 d에 할당한다.
        c = null;  // c가 가리키던 객체 포인터를 null로 변경
    }
}
