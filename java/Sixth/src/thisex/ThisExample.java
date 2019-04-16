package thisex;

class Birthday {

    int day;
    int month;
    int year;

    public void setYear(int year) {
        this.year = year;
    }

    public void printThis() {
        System.out.println(this);
    }
}

public class ThisExample {

    public static void main(String[] args) {

        Birthday bDay = new Birthday();
        bDay.setYear(2000);                 // 태어난 년도를 2000으로 지정
        System.out.println(bDay);           // 참조 변수 출력
        bDay.printThis();                   // this 출력 메서드 호출
    }
}