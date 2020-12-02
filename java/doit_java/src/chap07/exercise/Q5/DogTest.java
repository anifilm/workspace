/*
Q5
Q4에서 DogTestArrayList 클래스를 만들어 멤버 변수로 ArrayList를 사용합니다.
Dog 인스턴스를 5개 생성하여 ArrayList에 추가하고 ArrayList의 정보를 출력하는
코드를 작성하세요.
힌트 ArrayList의 메서드를 활요하세요.
 */
package chap07.exercise.Q5;
import java.util.ArrayList;

public class DogTest {
    public static void main(String[] args) {

        ArrayList<Dog> mydog = new ArrayList<Dog>();

        mydog.add(new Dog("코코", "골든 리트리버"));
        mydog.add(new Dog("맥스", "닥스훈트"));
        mydog.add(new Dog("찰리", "도베르만"));
        mydog.add(new Dog("버디", "말티즈"));
        mydog.add(new Dog("루키", "시바견"));

        for (int i = 0; i < mydog.size(); i++)
            System.out.println(mydog.get(i).showDogInfo());

        System.out.println("\n=== 향상된 for문 사용 ===");
        for (Dog dog : mydog) {
            System.out.println(dog.showDogInfo());
        }
    }
}
