/*
Open Challenge - 간단한 스윙 응용프로그램 만들기
간단한 스윙 응용프로그램을 만들어보자. 그림과 같이 프레임의 콘텐츠 팬에 BorderLayout 배치관리자를 설치하고,
NORTH 영역과 CENTER 영역에는 JPanel을 상속받은 패널을 만들어 붙인다. NORTH 영역의 패널에는 3개의 버튼의 컴포넌트를
CENTER 영역의 패널에는 3개의 JLabel을 이용하여 각각 "Hello", "Java", "Love"를 출력한다. 문자열이 출력되는 위치는
독자가 정하라.
  (실행 결과 생략...)

 */
package chap09.openchallenge;

import javax.swing.*;
import java.awt.*;

public class SimpleSwingFrame extends JFrame{
    public SimpleSwingFrame() {
        super("Open Challenge 9");  // 타이틀
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Container c = getContentPane();
        c.setLayout(new BorderLayout());  // 콘텐츠 팬이 디폴트로 BorderLayout이기 때문에 이 라인을 없어도 됨

        // 두 개의 패널을 붙인다.
        c.add(new NorthPanel(), BorderLayout.NORTH);  // NorthPanel을 프레임의 NORTH 영역에 부착한다.
        c.add(new CenterPanel(), BorderLayout.CENTER);  // CenterPanel을 프레임의 CENTER 영역에 부착한다.
        setSize(300, 300);
        setVisible(true);
    }

    // 프레임의 NORTH 영역에 부착되는 패널 클래스
    class NorthPanel extends JPanel {
        public NorthPanel() {
            setBackground(Color.LIGHT_GRAY);  // 배경색 설정
            setLayout(new FlowLayout());
            add(new JButton("Open"));
            add(new JButton("Read"));
            add(new JButton("Close"));
        }
    }

    // 프레임의 CENTER 영역에 부착되는 패널 클래스
    class CenterPanel extends JPanel {
        public CenterPanel() {
            setLayout(null);  // 배치관리자 삭제, 절대 위치에 컴포넌트 삽입

            JLabel a = new JLabel("Hello");
            a.setSize(100,20);
            a.setLocation(100, 10);  // 문자열의 위치 지정

            JLabel b = new JLabel("Java");
            b.setSize(100,20);
            b.setLocation(20, 150);  // 문자열의 위치 지정

            JLabel c = new JLabel("Love");
            c.setSize(100,20);
            c.setLocation(200, 120);  // 문자열의 위치 지정

            // 3개의 문자열 추가
            add(a);
            add(b);
            add(c);
        }
    }

    static public void main(String[] arg) {
        new SimpleSwingFrame();
    }
}
