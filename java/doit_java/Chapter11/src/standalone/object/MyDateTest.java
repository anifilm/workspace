/*
나 혼자 코딩!
MyDate 클래스의 equals() 메서드 재정의하기
날짜를 구현한 클래스 MyDate가 다음과 같습니다. 날짜가 같으면 System.out.println(date1.
equals(date2)); 의 출력 결과 값이 true가 되도록 equals() 메서드를 재정의하세요.
 */
package standalone.object;

import java.util.Objects;

class MyDate {
    int day;
    int month;
    int year;

    public MyDate(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof MyDate) {
            MyDate date = (MyDate)obj;
            return (this.day == date.day && this.month == date.month && this.year == date.year);
        }
        return false;
    }
}

public class MyDateTest {
    public static void main(String[] args) {

        MyDate date1 = new MyDate(11, 27, 2020);
        MyDate date2 = new MyDate(11, 27, 2020);

        System.out.println(date1.equals(date2));
    }
}
