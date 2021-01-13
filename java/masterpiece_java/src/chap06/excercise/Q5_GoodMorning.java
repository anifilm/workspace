/*
Q5
Calendar 객체를 생성하면 현재 시간을 알 수 있다. 프로그램을 실행한 현재 시간이 새벽 4시에서 낮 12시 이점이면 "Good Mornig"을,
오후 6시 이전이면 "Good Afternoon"을, 밤 10시 이전이면 "Good Evening"을, 그 이후는 "Good Night"을 출력하는 프로그램을 작성하라.
  (실행 결과 생략...)

 */
package chap06.excercise;
import java.util.Calendar;

public class Q5_GoodMorning {
    public static void printCalendar(String msg, Calendar cal) {
        int year = cal.get(Calendar.YEAR);               // 년도
        int month = cal.get(Calendar.MONTH) + 1;         // 월(0~11)
        int day = cal.get(Calendar.DAY_OF_MONTH);        // 한 달의 날짜
        int dayOfWeek = cal.get(Calendar.DAY_OF_WEEK);   // 한 주의 요일
        int hour = cal.get(Calendar.HOUR);               // 시간 (0~11)
        int hourOfDay = cal.get(Calendar.HOUR_OF_DAY);   // 24시간을 기준으로 한 시간
        int ampm = cal.get(Calendar.AM_PM);              // 오전인지 오후인지 구분
        int minute = cal.get(Calendar.MINUTE);           // 분
        int second = cal.get(Calendar.SECOND);           // 초
        int millisecond = cal.get(Calendar.MILLISECOND); // 밀리초

        System.out.println(msg + ampm + hour +"시 " + minute + "분 입니다.");

        if (hourOfDay >= 4 && hourOfDay < 12)
            System.out.println("Good Morning");
        else if (hourOfDay >= 12 && hourOfDay < 18)
            System.out.println("Good Afternoon");
        else if (hourOfDay >= 18 && hourOfDay < 22)
            System.out.println("Good Evening");
        else
            System.out.println("Good Night");
    }

    public static void main(String[] args) {
        Calendar now = Calendar.getInstance();
        printCalendar("현재 시간은 ", now);
    }
}
