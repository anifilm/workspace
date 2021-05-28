// 예제 13-3 깜빡이는 문자열을 가진 레이블 만들기
package chap13.section3;

import java.awt.*;
import javax.swing.*;

class FlickeringLabel extends JLabel implements Runnable {
    private long delay; // 배경색이 바뀌는 지연 시간. 밀리초 단위

    public FlickeringLabel(String text, long delay) { // 생성자
        super(text); // JLabel 생성자 호출
        this.delay = delay;
        setOpaque(true); // 배경색 변경이 가능하도록 설정

        Thread th = new Thread(this);
        th.start();
    }
    @Override
    public void run() {
        int n = 0;
        while (true) {
            if (n == 0) {
                setBackground(Color.YELLOW);
                n = 1;
            }
            else {
                setBackground(Color.GREEN);
                n = 0;
            }
            try {
                Thread.sleep(delay); // dalay 밀리초 동안 잠을 잔다.
            }
            catch(InterruptedException e) {
                return;
            }
        }
    }
}

public class FlickeringLabelEx extends JFrame {
    public FlickeringLabelEx() {
        setTitle("FlickeringLabelEx 예제");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        Container c = getContentPane();
        c.setLayout(new FlowLayout());

        // 깜빡이는 레이블 생성
        FlickeringLabel fLabel = new FlickeringLabel("깜빡", 500); // 500밀리초 주기로 배경색 변경

        // 깜빡이지 않는 레이블 생성
        JLabel label = new JLabel("안깜빡");

        // 깜빡이는 레이블 생성
        FlickeringLabel fLabel2 = new FlickeringLabel("여기도 깜빡", 300); // 300밀리초 주기로 배경색 변경

        c.add(fLabel);
        c.add(label);
        c.add(fLabel2);

        setSize(300, 150);
        setVisible(true);
    }

    public static void main(String[] args) {
        new FlickeringLabelEx();
    }
}
