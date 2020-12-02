/*
Q4
다음과 같이 Dog 클래스가 있습니다. DogTest 클래스와 배열 길이가 5인 Dog[] 배열을
만든 후 Dog 인스턴스를 5개 생성하여 배열에 추가합니다. for문과 향상된 for문에서
Dog 클래스의 showDogInfo() 메서드를 사용하여 배열에 추가한 Dog 정보를 모두 출력하세요.
 */
package chap07.exercise.Q4;

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
