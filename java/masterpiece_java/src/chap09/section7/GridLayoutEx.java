// 예제 9-5 GridLayout으로 입력 폼 만들기
package chap09.section7;

import javax.swing.*;
import java.awt.*;

public class GridLayoutEx extends JFrame {
    public GridLayoutEx() {
        setTitle("GridLayout Sample");  // 프레임의 타이틀 설정
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  // 프레임 윈도우를 닫으면 프로그램 종료

        GridLayout grid = new GridLayout(4, 2);  // 4x2 격자의 GridLayout 배치관리자 생성
        grid.setVgap(5);  // 격자 사이의 수직 간격을 5픽셀로 설정

        Container c = getContentPane();
        c.setLayout(grid);  // grid를 콘텐츠 팬의 배치관리자로 지정

        c.add(new JLabel(" 이름"));
        c.add(new JTextField(""));
        c.add(new JLabel(" 학번"));
        c.add(new JTextField(""));
        c.add(new JLabel(" 학과"));
        c.add(new JTextField(""));
        c.add(new JLabel(" 과목"));
        c.add(new JTextField(""));

        setSize(300, 200);
        setVisible(true);
    }

    public static void main(String[] args) {
        new GridLayoutEx();
    }
}
