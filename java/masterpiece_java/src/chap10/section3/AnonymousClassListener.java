// 익명 클래스로 Action 이벤트 리스너 만들기
package chap10.section3;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class AnonymousClassListener extends JFrame {
    public AnonymousClassListener() {
        setTitle("Action 이벤트 리스너 예제");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        Container c = getContentPane();
        c.setLayout(new FlowLayout());

        JButton btn = new JButton("Action");
        c.add(btn);
        btn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                JButton b = (JButton) e.getSource();
                String title;
                if (b.getText().equals("Action")) {
                    b.setText("액션");
                    title = "액션 이벤트 리스너 예제";
                } else {
                    b.setText("Action");
                    title = "Action 이벤트 리스너 예제";
                }
                // AnonymouseClassListener의 멤버나 JFrame의 멤버를 호출할 수 있다.
                //AnonymouseClassListener.this.setTitle(title); // 이렇게도 사용해도 된다.
                setTitle(title);  // 프레임의 타이틀에 버튼 문자열을 출력
            }
        });

        setSize(350, 150);
        setVisible(true);
    }

    public static void main(String[] args) {
        new AnonymousClassListener();
    }
}

