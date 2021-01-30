// 인맥 관리 프로그램의 문제를 상속으로 해결하자
class Friend {
    private String name;   // 이름
    private String phone;  // 전화번호

    public Friend(String name, String phone) {
        this.name = name;
        this.phone = phone;
    }
    public void showInfo() {
        System.out.println("이름: " + name);
        System.out.println("전화: " + phone);
    }
}

class UnivFriend extends Friend {  // 대학 동창
    private String major;  // 전공

    public UnivFriend(String name, String major, String phone) {
        super(name, phone);
        this.major = major;
    }
    public void showInfo() {
        super.showInfo();
        System.out.println("전공: " + major);
    }
}

class CompFriend extends Friend {  // 직장 동료
    private String department;  // 부서

    public CompFriend(String name, String department, String phone) {
        super(name, phone);
        this.department = department;
    }
    public void showInfo() {
        super.showInfo();
        System.out.println("부서: " + department);
    }
}

class MyFriends2 {
    public static void main(String[] args) {
        Friend[] friends = new Friend[10];
        int cnt = 0;

        friends[cnt++] = new UnivFriend("Lee", "Computer", "010-333-5555");
        friends[cnt++] = new UnivFriend("Seo", "Electronics", "010-222-4444");
        friends[cnt++] = new CompFriend("Yoon", "R&D 1", "02-123-9999");
        friends[cnt++] = new CompFriend("Park", "R&D 2", "02-123-7777");

        for (int i = 0; i < cnt; i++) {
            friends[i].showInfo();  // 오버라이딩 한 메서드가 호출된다.
            System.out.println();
        }
    }
}
