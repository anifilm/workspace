/*
Q12
간단한 콘서트 예약 시스템을 만들어 보자. 다수의 클래스를 다루고 객체의 배열을 다루기에는 아직 자바 프로그램 개발이 익숙하지 않은 초보자에게
다소 무리가 있을 것이다. 그러나 반드시 넘어야 할 산이다. 이 도전을 통해 산을 넘어갈 수 있는 체력을 키워보자. 예약 시스템의 기능은 다음과
같다.
 - 공연은 하루에 한 번 있다.
 - 좌석은 S석, A석, B석으로 나뉘며, 각각 10개의 좌석이 있다.
 - 예약 시스템의 메뉴는 "예약", "조회", "취소", "끝내기"가 있다.
 - 예약은 한 자리만 가능하고, 좌석 타입, 예약자 이름, 좌석 번호를 순서대로 입력받아 예약한다.
 - 조회는 모든 좌석을 출력한다.
 - 취소는 예약자의 이름을 입력받아 취소한다.
 - 없는 이름, 없는 번호, 없는 메뉴, 잘못된 취소 등에 대해서 오류 메시지를 출력하고 사용자가 다시 시도하도록 한다.

 (실행 결과 생략...)

 */
package chap04.excercise;
import java.util.Scanner;

class Concert {
    private final int SEAT = 10;
    private String[] S;
    private String[] A;
    private String[] B;
    private Scanner scanner;

    public Concert() {
        scanner = new Scanner(System.in);
        S = new String[SEAT];
        A = new String[SEAT];
        B = new String[SEAT];
        for (int i = 0; i < SEAT; i++) {
            S[i] = "-----";
            A[i] = "-----";
            B[i] = "-----";
        }
    }
    public void printSeat(String[] seat) {
        for (int i = 0; i < seat.length; i++)
            System.out.print(" " + seat[i] + " ");
        System.out.println();
    }
    public void allPrint() {
        System.out.print("S >> ");
        printSeat(S);
        System.out.print("A >> ");
        printSeat(A);
        System.out.print("B >> ");
        printSeat(B);
        System.out.println("*** 조회를 완료하였습니다 ***");
    }
    public void inputSeat(String[] seat) {
        System.out.print("예약 이름 >> ");
        String name = scanner.next();
        while (true) {
            System.out.print("번호 >> ");
            int num = scanner.nextInt();
            if (seat[num-1].equals("-----")) {
                seat[num-1] = name;
                break;
            }
            else {
                System.out.println("다른 좌석을 선택하여 주십시오.");
            }
        }
    }
    public void deleteSeat(String[] seat) {
        System.out.print("취소 이름 >> ");
        String name = scanner.next();
        for (int i = 0; i < seat.length; i++) {
            if (name.equals(seat[i])) {
                seat[i] = "-----";
                break;
            }
        }
    }
    public void choiceSeat(String s) {
        while (true) {
            System.out.print("좌석구분 S(1), A(2), B(3) >> ");
            int select = scanner.nextInt();
            switch (select) {
                case 1:
                    System.out.print("S >> ");
                    printSeat(S);
                    if (s.equals("input"))
                        inputSeat(S);
                    else
                        deleteSeat(S);
                    return;
                case 2:
                    System.out.print("A >> ");
                    printSeat(A);
                    if (s.equals("input"))
                        inputSeat(A);
                    else
                        deleteSeat(A);
                    return;
                case 3:
                    System.out.print("B >> ");
                    printSeat(B);
                    if (s.equals("input"))
                        inputSeat(B);
                    else
                        deleteSeat(B);
                    return;
                default:
                    System.out.println("다시 입력하여 주십시오.");
            }
        }
    }
}

public class Q12 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Concert concert = new Concert();
        System.out.println("명품콘서트홀 예약 시스템입니다.");
        while(true) {
            System.out.print("예약:1, 조회:2, 취소:3, 끝내기:4 >> ");
            int select = scanner.nextInt();
            switch(select) {
                case 1:  // 예약
                    concert.choiceSeat("input");
                    break;
                case 2:  // 조회
                    concert.allPrint();
                    break;
                case 3:  // 취소
                    concert.choiceSeat("delete");
                    break;
                case 4:  // 끝내기
                    System.out.println("프로그램을 종료합니다.");
                    scanner.close();
                    return;
                default :
                    System.out.println("다시 입력하여 주십시오.");
            }
        }
    }
}
