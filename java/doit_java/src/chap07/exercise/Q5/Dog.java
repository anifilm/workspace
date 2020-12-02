/*
Q5
Q4에서 DogTestArrayList 클래스를 만들어 멤버 변수로 ArrayList를 사용합니다.
Dog 인스턴스를 5개 생성하여 ArrayList에 추가하고 ArrayList의 정보를 출력하는
코드를 작성하세요.
힌트 ArrayList의 메서드를 활요하세요.
 */
package chap07.exercise.Q5;

public class Dog {
    private String name;
    private String type;

    public Dog(String name, String type) {
        this.name = name;
        this.type = type;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public String showDogInfo() {
        return name + ", " + type;
    }
}
