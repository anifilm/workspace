/*
Q4
다음 코드는 오류가 발생합니다. 오류가 발생하는 원인을 설명하세요.
 */
package chap08.exercise;

class Employee {
    public String name;
    public String grade;

//  public Employee() {}    // 디폴트 생성자가 없다.
    public Employee(String name) {
        this.name = name;
    }
}

class Engineer extends Employee {
    private String skillset;

    // 생성자 정의 필요 super()를 통해 상위 클래스의 생성자를 명시적으로 호출
    public Engineer(String name) {
        super(name);
    }
    public String getSkillset() {
        return skillset;
    }
    public void setSkillset(String skillset) {
        this.skillset = skillset;
    }
}

public class Q4 {
    public static void main(String[] args) {

        Employee employee = new Employee("임채영");
        System.out.println(employee.name);

        Engineer engineer = new Engineer("정흥규");
        System.out.println(engineer.name);
    }
}

/*

상위 클래스(Employee)에 디폴트 생성자가 없으므로 하위 클래스(Engineer)에서
생성자를 정의하고 super()를 사용하여 상위 클래스의 생성자를 명시적으로 호출해야
합니다.

 */
