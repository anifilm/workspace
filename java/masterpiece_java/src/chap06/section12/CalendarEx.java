// Calendar를 활용하여 현재 날짜와 시간을 알아내기/날짜 시간 설정하기
package chap06.section12;

import java.util.Calendar;

public class CalendarEx {
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
        System.out.print(msg + year + "/" + month + "/" + day + "/");

        switch (dayOfWeek) {
            case Calendar.SUNDAY:
                System.out.println("일요일"); break;
            case Calendar.MONDAY:
                System.out.println("월요일"); break;
            case Calendar.TUESDAY:
                System.out.println("화요일"); break;
            case Calendar.WEDNESDAY:
                System.out.println("수요일"); break;
            case Calendar.THURSDAY:
                System.out.println("목요일"); break;
            case Calendar.FRIDAY:
                System.out.println("금요일"); break;
            case Calendar.SATURDAY:
                System.out.println("토요일"); break;
        }
        System.out.print("(" + hourOfDay + "시)");
        if (ampm == Calendar.AM)
            System.out.print("오전 ");
        else
            System.out.print("오후 ");

        System.out.println(hour + "시 " + minute + "분 " + second + "초 " + millisecond + "밀리초");
    }
    public static void main(String[] args) {
        Calendar now = Calendar.getInstance();
        printCalendar("현재 ", now);

        Calendar firstDate = Calendar.getInstance();
        firstDate.clear();
        firstDate.set(2016, 11, 25);  // 2016년 12월 25일. 12월을 표현하기 위해 month에 11로 설정

        firstDate.set(Calendar.HOUR_OF_DAY, 20);  // 저녁 8시
        firstDate.set(Calendar.MINUTE, 30);       // 30분
        printCalendar("처음 데이트 한 날은 ", firstDate);

    }
}
