// BorderLayout 배치관리자를 사용하는 예
package chap09.section6;

import javax.swing.*;
import java.awt.*;

public class BorderLayoutEx extends JFrame {
	public BorderLayoutEx() {
		setTitle("BorderLayout Sample");  // 프레임의 타이틀 설정
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  // 프레임 윈도우를 닫으면 프로그램 종료

		Container c = getContentPane();
		// 콘텐츠 팬에 BorderLayout 배치관리자 설정
		c.setLayout(new BorderLayout(30, 20));

		c.add(new JButton("Calculate"), BorderLayout.CENTER);
		c.add(new JButton("add"), BorderLayout.NORTH);
		c.add(new JButton("sub"), BorderLayout.SOUTH);
		c.add(new JButton("mul"), BorderLayout.EAST);
		c.add(new JButton("div"), BorderLayout.WEST);

		setSize(300, 200); // 프레임 크기 300×200 설정
		setVisible(true);  // 프레임을 화면에 출력
	}

	public static void main(String[] args) {
		new BorderLayoutEx();
	}
}
