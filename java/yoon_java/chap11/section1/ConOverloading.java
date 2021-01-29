// 생성자도 오버로딩의 대상이 됩니다.
class Person {
    private int regiNum;  // 주민등록 번호
    private int passNum;  // 여권 번호

    Person(int rnum, int pnum) {
        regiNum = rnum;
        passNum = pnum;
    }
    Person(int rnum) {
        regiNum = rnum;
        passNum = 0;
    }
    void showPersonalInfo() {
        System.out.println("주민등록 번호: " + regiNum);

        if (passNum != 0)
            System.out.println("여권 번호: " + passNum);
        else
            System.out.println("여권을 가지고 있지 않습니다.");
        System.out.println();
    }
}

class ConOverloading {
    public static void main(String[] args) {
        // 여권이 있는 사람의 정보를 담은 인스턴스 생성
        Person jung = new Person(820517, 102345);

        // 여권 없는 사람의 정보를 담은 인스턴스 생성
        Person hong = new Person(781203);

        jung.showPersonalInfo();
        hong.showPersonalInfo();
    }
}
