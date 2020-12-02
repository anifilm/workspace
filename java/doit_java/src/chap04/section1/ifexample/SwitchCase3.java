// switch-case문 예제 3
package chap04.section1.ifexample;

public class SwitchCase3 {
    public static void main(String args[]) {

        int month = 10;
        int day;

        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                day = 31;
                break;
            case 2:
                day = 28;
                break;
            case 4: case 6: case 9: case 11:
                day = 30;
                break;
            default:
                day = 0;
        }
        System.out.println(month + "월은 " + day + "일까지 입니다.");
    }
}
