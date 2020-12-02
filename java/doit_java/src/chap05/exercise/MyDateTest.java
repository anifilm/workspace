/*
Q4
05-7에서 예제로 나온 MyDate와 MyDateTest 클래스를 완성해 봅시다.

 <MyDate 클래스 완성하기>
 - day, month, year 변수는 private으로 선언합니다.
 - 각 변수의 get, set 메서드를 public으로 만듭니다.
 - MyDate(int day, int month, int year) 생성자를 만듭니다.
 - public boolean isValid() 메서드를 만들어 날짜가 유효한지 확인합니다.
 - MyDateTest 클래스에서 생성한 MyDate 날짜가 유효한지 확인합니다.
 */
package chap05.exercise;

public class MyDateTest {
    public static void main(String[] args) {

        MyDate date1 = new MyDate(30, 2, 2020);
        System.out.println(date1.isValid());
        MyDate date2 = new MyDate(2, 10, 2016);
        System.out.println(date2.isValid());
    }
}
