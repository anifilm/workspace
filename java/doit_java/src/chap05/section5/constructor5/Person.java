// 생성자 사용하기
package chap05.section5.constructor5;

public class Person {
    String name;
    float height;
    float weight;

    // 디폴트 생성자
    public Person() {}
    // 이름을 매개변수로 입력 받는 생성자
    public Person(String pName) {
        name = pName;
    }
    // 이름, 키, 몸무게를 매개변수로 입력 받는 생성자
    public Person(String pName, float pHeight, float pWeight) {
        name = pName;
        height = pHeight;
        weight = pWeight;
    }
}
