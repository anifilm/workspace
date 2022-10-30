package chap22;

class HumanCamp2 {
    private int speed = 10;

    public void getMarine() {
        class Marine2 {  // [1]
            // 외부 클래스의 자원(speed) 사용 가능
            public void move() {
                System.out.printf("인간형 유닛이 %d 속도록 이동합니다.\n", speed);  // [2]
            }
        }

        Marine2 inner = new Marine2();  // [3]
        inner.move();
    }
}

public class Ex02_LocalInner {
    public static void main(String[] args) {
        HumanCamp2 hc = new HumanCamp2();
        hc.getMarine();
    }
}
