// 단순한 인맥 관리 프로그램
class UnivFriend {  // 대학 동창
    private String name;   // 이름
    private String major;  // 전공
    private String phone;  // 전화번호

    public UnivFriend(String name, String major, String phone) {
        this.name = name;
        this.major = major;
        this.phone = phone;
    }
    public void showInfo() {
        System.out.println("이름: " + name);
        System.out.println("전공: " + major);
        System.out.println("전화: " + phone);
    }
}

class CompFriend {  // 직장 동료
    private String name;   // 이름
    private String department;  // 부서
    private String phone;  // 전화번호

    public CompFriend(String name, String department, String phone) {
        this.name = name;
        this.department = department;
        this.phone = phone;
    }
    public void showInfo() {
        System.out.println("이름: " + name);
        System.out.println("부서: " + department);
        System.out.println("전화: " + phone);
    }
}

class MyFriends {
    public static void main(String[] args) {
        // 대학 동창의 관리를 위한 배열과 변수
        UnivFriend[] ufriends = new UnivFriend[5];
        int ucnt = 0;

        // 직장 동료의 관리를 위한 배열과 변수
        CompFriend[] cfriends = new CompFriend[5];
        int ccnt = 0;

        // 대학 동창의 정보 저장
        ufriends[ucnt++] = new UnivFriend("Lee", "Computer", "010-333-5555");
        ufriends[ucnt++] = new UnivFriend("Seo", "Electronics", "010-222-4444");

        // 직장 동료의 정보 저장
        cfriends[ccnt++] = new CompFriend("Yoon", "R&D 1", "02-123-9999");
        cfriends[ccnt++] = new CompFriend("Park", "R&D 2", "02-123-7777");

        // 모든 동창 및 동료의 정보 전체 출력
        for (int i = 0; i < ucnt; i++) {
            ufriends[i].showInfo();
            System.out.println();
        }
        for (int i = 0; i < ccnt; i++) {
            cfriends[i].showInfo();
            System.out.println();
        }
    }
}
