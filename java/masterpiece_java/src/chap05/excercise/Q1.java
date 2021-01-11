/*
Q1
다음 main() 메서드와 실행 결과를 참고하여 TV를 상속받은 ColorTV 클래스를 작성하라.
  (main() 메서드, 실행 결과 생략...)
 */
package chap05.excercise;

class TV {
    private int size;

    public TV(int size) { this.size = size; }
    protected int getSize() { return size; }
}

class ColorTV extends TV {
    private int color;

    public ColorTV(int size, int color) {
        super(size);
        this.color = color;
    }
    protected int getColor() { return color; }
    public void printProperty() {
        System.out.println(getSize() + "인치 " + color + "컬러");
    }
}

public class Q1 {
    public static void main(String[] args) {
        ColorTV myTV = new ColorTV(32, 1024);
        myTV.printProperty();
    }
}
