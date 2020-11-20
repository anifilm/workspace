/*
나혼자 코딩!
1. 다음 예제의 클래스를 만들고 결과 값을 출력해 봅시다.

 나이가 40살, 이름이 James라는 남자가 있습니다. 이 남자는 결혼을 했고, 자식이 셋 있습니다.

 <출력 결과>
 이 사람의 나이
 이 사람의 이름
 이 사람의 결혼 여부
 이 사람의 자녀 수

힌트 1 클래스 이름은 보편적인 것으로 만드는 것이 좋습니다. (Person 또는 Main)
힌트 2 클래스에서 사용할 멤버 변수를 생각해 보세요.
힌트 3 각 멤버 변수에 맞는 자료형을 생각해 보세요. (결혼 여부: boolena isMarried)
 */
package standalone;

public class PersonTest {
    public static void main(String[] args) {
        Person personJames = new Person();
        personJames.personName = "James";
        personJames.age = 40;
        personJames.isMarried = true;
        personJames.numberOfChildren = 3;

        System.out.print("이름: ");
        System.out.println(personJames.personName);
        System.out.print("나이: ");
        System.out.println(personJames.age);
        System.out.print("결혼 여부: ");
        System.out.println(personJames.isMarried);
        System.out.print("자녀 수: ");
        System.out.println(personJames.numberOfChildren);
    }
}
