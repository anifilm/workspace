/*
나 혼자 코딩!
switch-case문 연습하기
5층 건물이 있습니다. 1층 약국, 2층 정형외과, 3층 피부과, 4층 치과, 5층 헬스 클럽입니다.
건물의 층을 누르면 그 증이 어떤 곳인지 알려 주는 엘리베이터가 있다고 할 때 앞의 예제를
참고해서 switch-case문으로 구현해 보세요. (5인 경우 '5층 헬스 클럽입니다.'라고 출력)
 */
package chap04.standalone;

public class SwitchCase3_Elevator {
    public static void main(String[] args) {

        int floor = 5;
        String ment;

        switch (floor) {
            case 1:
                ment = "약국";
                break;
            case 2:
                ment = "정형외과";
                break;
            case 3:
                ment = "피부과";
                break;
            case 4:
                ment = "치과";
                break;
            case 5:
                ment = "헬스 클럽";
                break;
            default:
                System.out.print("잘못 누르셨습니다.");
                return;
        }
        System.out.println(floor + "층 " + ment + " 입니다.");
    }
}
