/*
나 혼자 코딩!
MyDate 클래스의 hashCode() 메서드 재정의하기
362쪽의 <나 혼자 코딩!> 코너에서 만든 MyDate 클래스에 equals()를 재정의 했을 겁니다.
equals() 메서드를 재정의할 때 사용한 멤버 변수를 활용하여 hashCode() 메서드를 재정의
해 보세요.
 */
package chap11.standalone.object;

class MyDate2 {
    int day;
    int month;
    int year;

    public MyDate2(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof MyDate2) {
            MyDate2 date = (MyDate2)obj;
            return (this.day == date.day && this.month == date.month && this.year == date.year);
        }
        return false;
    }

    @Override
    public int hashCode() {
        return day * 10 + month * 101 + year * 102;
    }
}

public class MyDateTest2 {
    public static void main(String[] args) {

        MyDate2 date1 = new MyDate2(11, 27, 2020);
        MyDate2 date2 = new MyDate2(11, 27, 2020);

        System.out.println(date1.equals(date2));

        System.out.println(date1.hashCode());
        System.out.println(date2.hashCode());
    }
}
