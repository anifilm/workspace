// 예제 10-2 내부 클래스로 Action 이벤트 리스너 만들기
package chap10.section3;

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class InnerClassListener extends JFrame {
    public InnerClassListener() {
        setTitle("Action 이벤트 리스너 예제");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        Container c = getContentPane();
        c.setLayout(new FlowLayout());

        JButton btn = new JButton("Action");
        btn.addActionListener(new MyActionListener());  // Action 이벤트 리스너 추가
        c.add(btn);

        setSize(350, 150);
        setVisible(true);
    }

    // 내부 클래스로 Action 리스너를 작성
    private class MyActionListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            JButton b = (JButton) e.getSource();
            String title;
            if (b.getText().equals("Action")) {
                b.setText("액션");
                title = "액션 이벤트 리스너 예제";
            }
            else {
                b.setText("Action");
                title = "Action 이벤트 리스너 예제";
            }
            // InnerClassListener의 멤버나 JFrame의 멤버를 호출할 수 있다.
            InnerClassListener.this.setTitle(title);  // 프레임의 타이틀에 버튼 문자열을 출력
        }
    }

    public static void main(String[] args) {
        new InnerClassListener();
    }
}

