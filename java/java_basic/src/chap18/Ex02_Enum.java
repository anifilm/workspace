package chap18;

enum Human2 {
    MAN,
    WOMAN
}  // [1]

enum Machine2 {
    TANK,
    AIRPLANE
}

public class Ex02_Enum {
    public static void main(String[] args) {
        createUnit(Machine2.TANK);  // [2] 알맞은 상수 사용
    //  createUnit(Human2.MAN);  // [3] 잘못된 상수 사용: 에러

    /*  참고: C언어처럼 숫자로 비교하면 에러가 난다.
        if (Human2.MAN == 0) {  // [4] 잘못된 상수 사용: 에러
            ...
        } */
    }

    public static void createUnit(Machine2 kind) {  // [5]
        switch (kind) {
            case TANK:  // [6]
                System.out.println("탱크를 만듭니다.");
                break;
            case AIRPLANE:
                System.out.println("비행기를 만듭니다.");
                break;
        }
    }
}
