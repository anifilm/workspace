/*
Q2
다음 main() 메서드와 실행 결과를 참고하여 ColorTV를 상속받은 IPTV 클래스를 작성하라.
  (main() 메서드, 실행 결과 생략...)
 */
package chap05.excercise;

class IPTV extends ColorTV {
    private String ip;

    public IPTV(String ip, int size, int color) {
        super(size, color);
        this.ip = ip;
    }
    public void printProperty() {
        System.out.println("나의 IPTV는 " + ip + " 주소의 " + getSize() + "인치 " + getColor() + "컬러");
    }
}

public class Q2 {
    public static void main(String[] args) {
        IPTV iptv = new IPTV("192.1.1.2", 32, 1024);  // "192.1.1.2" 주소에 32인치, 2048컬러
        iptv.printProperty();
    }
}
