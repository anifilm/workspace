/*
Q3
노래 한 곡을 나타내는 Song 클래스를 작성하라. Song은 다음 필드로 구성된다.
 - 노래의 제목을 나타내는 title
 - 가수를 나타내는 artist
 - 노래가 발표된 연도를 나타내는 year
 - 국적을 나타내는 country

또한 Song 클래스에 다음 생성자와 메서드를 작서하라.
 - 생성자 2개: 디폴트 생성자와 매개 변수로 모든 필드를 초기화하는 생성자
 - 노래 정보를 출력하는 show() 메서드
 - main() 메서드에서는 1978년, 스웨덴 국적의 ABBA가 부른 "Dancing Queen"을 Song 객체로 생성하고 show()를 이용하여 노래의 정보를
   다음과 같이 출력하라.
   (실행 결과 생략...)

 */
package chap04.excercise;

class Song {
    private String title;
    private String artist;
    private String country;
    private int year;

    public Song() {}
    public Song(String title, String artist, int year, String country) {
        this.title = title;
        this.artist = artist;
        this.country = country;
        this.year = year;
    }
    public void show() {
        System.out.println(year + "년 " + country + "국적의 " + artist + "가 부른 " + title);
    }
}

public class Q3 {
    public static void main(String[] args) {
        Song song = new Song("Dancing Queen", "ABBA", 1978, "스웨덴");
        song.show();
    }
}
