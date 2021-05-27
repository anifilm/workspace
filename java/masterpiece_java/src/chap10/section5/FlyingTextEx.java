// 예제 10-8 상(UP), 하(DOWN), 좌(LEFT), 우(RIGHT) 키로 "HELLO" 문자열 마음대로 움직이기
package chap10.section5;

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class FlyingTextEx extends JFrame {
    private final int FLYING_UNIT = 10; // 레이블이 한 번 움직이는 단위는 10픽셀
    private JLabel la = new JLabel("HELLO"); // 키 입력에 따라 움직일 레이블 컴포넌트

    public FlyingTextEx() {
        setTitle("상,하,좌,우 키를 이용하여 텍스트 움직이기");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        Container c = getContentPane();
        c.setLayout(null); // 콘텐츠 팬의 배치관리자 삭제
        c.addKeyListener(new MyKeyListener()); // 콘텐츠 팬에 Key 리스너 달기
        la.setLocation(50, 50); // la의 초기 위치는 (50, 50)
        la.setSize(100, 20);
        c.add(la);

        setSize(300, 300);
        setVisible(true);

        c.setFocusable(true);
        c.requestFocus(); // 콘텐츠 팬이 키 입력을 받을 수 있도록 포커스 강제 지정

        // 다음 코드는 콘텐츠 팬에 포커스를 잃은 경우 마우스를 클릭하면 다시 포커스를 얻게 함
        c.addMouseListener(new MouseAdapter() {
           public void mouseClicked(MouseEvent e) {
               Component com = (Component) e.getSource(); // 마우스가 클릭된 컴포넌트
               com.setFocusable(true);
               com.requestFocus(); // 마우스가 클릭된 컴포넌트에게 포커스 설정
           }
        });
    }

    // Key 리스너 구현
    class MyKeyListener extends KeyAdapter {
        public void keyPressed(KeyEvent e) {
            int keyCode = e.getKeyCode(); // 입력된 키의 키코드를 알아낸다.

            // 키 코드 값(keyCode)에 따라 상, 하, 좌, 우 키를 판별하고 la의 위치를 이동시킨다.
            switch (keyCode) {
                case KeyEvent.VK_UP:
                    la.setLocation(la.getX(), la.getY() - FLYING_UNIT); break;
                case KeyEvent.VK_DOWN:
                    la.setLocation(la.getX(), la.getY() + FLYING_UNIT); break;
                case KeyEvent.VK_LEFT:
                    la.setLocation(la.getX() - FLYING_UNIT, la.getY()); break;
                case KeyEvent.VK_RIGHT:
                    la.setLocation(la.getX() + FLYING_UNIT, la.getY()); break;
            }
        }
    }

    public static void main(String[] args) {
        new FlyingTextEx();
    }
}
