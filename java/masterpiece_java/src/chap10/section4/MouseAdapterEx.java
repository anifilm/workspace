// 예제 10-5 MouseAdapter 사용하기
package chap10.section4;

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class MouseAdapterEx extends JFrame {
    private JLabel la = new JLabel("Hello"); // "Hello"를 출력하기 위한 레이블

    public MouseAdapterEx() {
        setTitle("Mouse 이벤트 예제");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        Container c = getContentPane();
        c.addMouseListener(new MyMouseAdapter()); // 콘텐츠 팬에 이벤트 리스너 추가

        c.setLayout(null);  // 콘텐츠 펜의 배치관리자 삭제
        la.setSize(50, 20); // 레이블의 크기 50x20 설정
        la.setLocation(30, 30); // 레이블의 위치 (30, 30)으로 설정
        c.add(la); // 레이블 컴포넌트 삽입

        setSize(300, 300);
        setVisible(true);
    }

    // MouseAdapter를 상속받아 리스너 구현
    class MyMouseAdapter extends MouseAdapter {
        public void mousePressed(MouseEvent e) {
            int x = e.getX(); // 마우스 클릭 좌표 x
            int y = e.getY(); // 마우스 클릭 좌표 y
            la.setLocation(x, y); // 레이블의 위치를 (x, y)로 이동
        }
    }

    public static void main(String[] args) {
        new MouseAdapterEx();
    }
}
