/* 문제 19-2 [깊은 복사를 위한 clone의 오버라이딩]
다음 클래스 정의에서 PersonalInfo의 clone 메서드 호출 시 깊은 복사가 이뤄지도록 clone 메서드를 오버라이딩 하자.
 */
class Business implements Cloneable {
    private String company;
    private String work;

    public Business(String company, String work) {
        this.company = company;
        this.work = work;
    }

    public void changeInfo(String company, String work) {
        this.company = company;
        this.work = work;
    }

    @Override
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

    public void showBusinessInfo() {
        System.out.println("회사: " + company);
        System.out.println("업무: " + work);
    }
}

class PersonalInfo implements Cloneable {
    private String name;
    private int age;
    private Business bz;

    public PersonalInfo(String name, int age, String company, String work) {
        this.name = name;
        this.age = age;
        bz = new Business(company, work);
    }

    public void changeInfo(String name, int age, String company, String work) {
        this.name = name;
        this.age = age;
        bz.changeInfo(company, work);
    }

    @Override
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

    public void showPersonalInfo() {
        System.out.println("이름: " + name);
        System.out.println("나이: " + age);
        bz.showBusinessInfo();
    }
}

class Q19_2 {
    public static void main(String[] args) {
        PersonalInfo org = new PersonalInfo("임채영", 44, "Info System", "Java 프로그래밍");
        PersonalInfo cpy;

        try {
            cpy = (PersonalInfo) org.clone(); // 인스턴스 복사
            org.changeInfo("정흥규", 43, "Info System", "C++ 프로그래밍");
            org.showPersonalInfo();
            System.out.println();
            cpy.showPersonalInfo();
        } catch (CloneNotSupportedException e) {
            e.printStackTrace();
        }
    }
}
