/*
다음 예제의 클래스를 만들고 결과값을 출력해 봅시다.

나이가 40살, 이름이 James라는 남자가 있습니다. 이 남자는 결혼을 했고, 자식이 셋 있습니다.

<출력결과>
이 사람의 나이
이 사람의 이름
이 사람의 결혼 여부
이 사람의 자녀수
*/

package alone;

public class PersonTest {

    public static void main(String args[]) {

        Person person = new Person();
        person.age = 40;
        person.name = "James";
        person.isMarried = true;
        person.numberOfChilden = 3;

        System.out.println("나이: " + person.age);
        System.out.println("이름: " + person.name);
        System.out.println("결혼 여부: " + person.isMarried);
        System.out.println("자녀수: " + person.numberOfChilden);
    }
}