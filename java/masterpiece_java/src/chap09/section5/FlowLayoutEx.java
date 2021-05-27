// 예제 9-3 FlowLayout 배치관리자 활용
package chap09.section5;

import javax.swing.*;
import java.awt.*;

public class FlowLayoutEx extends JFrame {
    public FlowLayoutEx() {
        setTitle("FlowLayout Sample");  // 프레임 타이틀 설정
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  // 프레임 윈도우를 닫으면 프로그램 종료

        Container c = getContentPane();
        // 콘텐츠 팬에 FlowLayout 배치 관리자 설정
        c.setLayout(new FlowLayout(FlowLayout.LEFT, 30, 40));

        c.add(new JButton("add"));
        c.add(new JButton("sub"));
        c.add(new JButton("mul"));
        c.add(new JButton("div"));
        c.add(new JButton("Calculate"));

        setSize(300, 200);  // 프레임 크기 300x200 설정
        setVisible(true);   // 화면에 프레임 출력
    }

    public static void main(String[] args) {
        new FlowLayoutEx();
    }
}
