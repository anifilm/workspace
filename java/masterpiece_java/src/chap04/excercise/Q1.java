/*
Q1
자바 클래스를 작성하는 연습을 해보자. 다음 main() 메서드를 실행하였을 때 예시와 같이 출력되도록 TV 클래스를 작성하라.
  (main() 메서드, 실행 결과 생략...)

 */
package chap04.excercise;

class TV {
    private String name;
    private int year;
    private int size;

    public TV (String name, int year, int size) {
        this.name = name;
        this.year = year;
        this.size = size;
    }
    public void show() {
        System.out.println(name + "에서 만든 " + year + "년형 " + size + "인치 TV");
    }
}

public class Q1 {
    public static void main(String[] args) {
        TV myTV = new TV("LG", 2017, 32);  // LG에서 만든 2017년 32인치
        myTV.show();
    }
}
