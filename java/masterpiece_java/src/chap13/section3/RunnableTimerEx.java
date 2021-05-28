// 예제 13-2 Runnable 인터페이스를 이용하여 1초 단위로 출력하는 타이머 스레드 만들기
package chap13.section3;

import java.awt.*;
import javax.swing.*;

class TimerRunnable implements Runnable {
    private JLabel timerLabel; // 타이머 값이 출력되는 레이블

    public TimerRunnable(JLabel timerLabel) {
        this.timerLabel = timerLabel; // 타이머 카운트를 출력할 레이블
    }
    // 스레드 코드, run()이 종료하면 스레드 종료
    @Override
    public void run() {
        int n = 0; // 타이머 카운트 값
        while (true) {
            timerLabel.setText(Integer.toString(n)); // 레이블에 카운트 값 출력
            n++; // 카운트 증가
            try {
                Thread.sleep(1000); // 1초 동안 잠을 잔다.
            } catch (InterruptedException e) {
                return; // 예외가 발생하면 스레드 종료
            }
        }
    }
}

public class RunnableTimerEx extends JFrame {
    public RunnableTimerEx() {
        setTitle("Runnable을 구현한 타이머 스레드 예제");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        Container c = getContentPane();
        c.setLayout(new FlowLayout());

        // 타이머 값을 출력할 레이블 생성
        JLabel timerLabel = new JLabel();
        timerLabel.setFont(new Font("Gothic", Font.ITALIC, 80));
        c.add(timerLabel); // 레이블 콘텐츠 팬에 부착

        // 타이머 스레드로 사용할 Runnable 객체 생성. 타이머 값을 출력할 레이블을 생성자에 전달
        TimerRunnable runnable = new TimerRunnable(timerLabel);
        Thread th = new Thread(runnable); // 스레드 객체 생성

        setSize(300, 170);
        setVisible(true);

        th.start(); // 타이머 스레드의 실행을 시작하게 한다.
    }

    public static void main(String[] args) {
        new RunnableTimerEx();
    }
}
