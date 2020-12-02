// Person 클래스 생성하기
package chap11.section4.classex;

public class Person {
    private String name;
    private int age;

    // 디폴트 생성자
    public Person() {}

    // 이름만 입력받는 생성자
    public Person(String name) {
        this.name = name;
    }

    // 이름과 나이를 입력받는 생성자
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}
