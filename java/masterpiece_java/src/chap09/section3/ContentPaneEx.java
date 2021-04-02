package chap09.section3;

import javax.swing.*;
import java.awt.*;

public class ContentPaneEx extends JFrame {
    public ContentPaneEx() {
        setTitle("ContentPane과 JFrame");  // 프레임 타이틀 설정
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  // 프레임 윈도우를 닫으면 프로그램 종료

        Container contentPane = getContentPane(); // 콘텐츠 팬을 알아낸다.
        contentPane.setBackground(Color.ORANGE);  // 콘텐츠 팬의 배경색을 오렌지색으로 설정
        contentPane.setLayout(new FlowLayout());  // 콘텐츠 팬에 FlowLayout 배치관리자 설정

        contentPane.add(new JButton("OK"));      // OK 버튼 추가
        contentPane.add(new JButton("Cancel"));  // Cancel 버튼 추가
        contentPane.add(new JButton("Ignore"));  // Ignore 버튼 추가

        setSize(300, 150);  // 프레임 크기 300x150 설정
        setVisible(true);   // 화면에 프레임 출력
    }

    public static void main(String[] args) {
        new ContentPaneEx();
    }
}
