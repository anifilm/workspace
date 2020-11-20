// 생성자 사용하기
package constructor;

public class Person5 {
    String name;
    float height;
    float weight;

    // 디폴트 생성자
    public Person5() {}
    // 이름을 매개변수로 입력 받는 생성자
    public Person5(String pName) {
        name = pName;
    }
    // 이름, 키, 몸무게를 매개변수로 입력 받는 생성자
    public Person5(String pName, float pHeight, float pWeight) {
        name = pName;
        height = pHeight;
        weight = pWeight;
    }
}