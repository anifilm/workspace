/*
Q4
Converter 클래스를 상속받아 Km를 mile(마일)로 변환하는 Km2Mile 클래스를 작성하라. main() 메서드와 실행 결과는 다음과 같다.
  (main() 메서드, 실행 결과 생략...)

 */
package chap05.excercise;

class Km2Mile extends Converter {
    public Km2Mile(double ratio) {
        this.ratio = ratio;
    }
    @Override
    protected double convert(double src) {
        return src / ratio;
    }
    @Override
    protected String getSrcString() {
        return "Km";
    }
    @Override
    protected String getDestString() {
        return "mile";
    }
}

public class Q4 {
    public static void main(String[] args) {
        Km2Mile toMile = new Km2Mile(1.6);  // 1마일은 1.6km
        toMile.run();
    }
}
