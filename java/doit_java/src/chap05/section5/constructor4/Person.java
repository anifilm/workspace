// 디폴트 생성자 직접 추가하기
package chap05.section5.constructor4;

public class Person {
    String name;
    float height;
    float weight;

    public Person() {}  // 디폴트 생성자 직접 추가
    public Person(String pName) {
        name = pName;
    }
}
