// 연습문제 Q5. Q4를 ArrayList로 변경하시오

package exercise.Q5;

import java.util.ArrayList;

public class DogTest {

    public static void main(String[] args) {

        ArrayList<Dog> mydog = new ArrayList<Dog>();

        mydog.add(new Dog("코코", "골든 리트리버"));
        mydog.add(new Dog("맥스", "닥스훈트"));
        mydog.add(new Dog("찰리", "도베르만"));
        mydog.add(new Dog("버디", "말티즈"));
        mydog.add(new Dog("루키", "시바견"));

        for (int i = 0; i < mydog.size(); i++) {
            System.out.println(mydog.get(i).showDogInfo());
        }

        System.out.println("\n=== 향상된 for문 사용 ===");

        for (Dog dog : mydog) {
            System.out.println(dog.showDogInfo());
        }
    }
}
