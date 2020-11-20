package exercise.Q4;

public class DogTest {

    public static void main(String[] args) {

        Dog[] mydog = new Dog[5];

        mydog[0] = new Dog("코코", "골든 리트리버");
        mydog[1] = new Dog("맥스", "닥스훈트");
        mydog[2] = new Dog("찰리", "도베르만");
        mydog[3] = new Dog("버디", "말티즈");
        mydog[4] = new Dog("루키", "시바견");

        for (int i = 0; i < mydog.length; i++) {
            System.out.println(mydog[i].showDogInfo());
        }

        System.out.println("\n=== 향상된 for문 사용 ===");

        for (Dog dog : mydog) {
            System.out.println(dog.showDogInfo());
        }
    }
}
