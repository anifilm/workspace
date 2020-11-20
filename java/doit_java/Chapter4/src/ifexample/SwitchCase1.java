// switch-case문 예제 1
package ifexample;

public class SwitchCase1 {
    public static void main(String args[]) {

        int ranking = 1;
        String medalColor;

        switch (ranking) {
            case 1:
                medalColor = "Gold";
                break;
            case 2:
                medalColor = "Silver";
                break;
            case 3:
                medalColor = "Bronze";
                break;
            default:
                medalColor = "None";
        }

        System.out.println(ranking + "등의 메달 색깔은 " + medalColor + " 입니다.");
    }
}
