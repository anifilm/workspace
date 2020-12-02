// Subject 클래스 구현하기
package chap07.section4.arraylist;

public class Subject {
    // Subject 클래스의 멤버 변수
    private String name;        // 과목 이름
    private int scorePoint;     // 과목 점수

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getScorePoint() {
        return scorePoint;
    }

    public void setScorePoint(int scorePoint) {
        this.scorePoint = scorePoint;
    }
}
