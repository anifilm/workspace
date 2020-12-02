package chap05;

class Person {
    String name;
    int age;
    float height;
    float weight;

    // 디폴트 생성자
    public Person() {}
    // 사람 이름을 매개변수로 입력받아서 Person 클래스를 생성하는 생성자
    public Person(String pName) {
        name = pName;
    }
    public Person(String pName, int pAge, float pHeight, float pWeight) {
        name = pName;
        age = pAge;
        height = pHeight;
        weight = pWeight;
    }
    public void showInfo() {
        System.out.println(name + ", "+ age + "세, " + height + "cm, " + weight + "kg");
    }
}

class PersonTest {
    public static void main(String[] args) {

        Person personLim = new Person();
        personLim.name = "임채영";
        personLim.age = 43;
        personLim.height = 169.8f;
        personLim.weight = 78.4f;

        Person personLim2 = new Person("임채영");
        personLim2.age = 43;
        personLim2.height = 169.8f;
        personLim2.weight = 78.4f;

        Person personLim3 = new Person("임채영", 43, 169.8f, 78.4f);

        personLim.showInfo();
        personLim2.showInfo();
        personLim3.showInfo();
    }
}
