/*
Q4
다음과 같이 Dog 클래스가 있습니다. DogTest 클래스와 배열 길이가 5인 Dog[] 배열을
만든 후 Dog 인스턴스를 5개 생성하여 배열에 추가합니다. for문과 향상된 for문에서
Dog 클래스의 showDogInfo() 메서드를 사용하여 배열에 추가한 Dog 정보를 모두 출력하세요.
 */
package exercise.Q4;

public class DogTest {
    public static void main(String[] args) {

        Dog[] mydog = new Dog[5];

        mydog[0] = new Dog("코코", "골든 리트리버");
        mydog[1] = new Dog("맥스", "닥스훈트");
        mydog[2] = new Dog("찰리", "도베르만");
        mydog[3] = new Dog("버디", "말티즈");
        mydog[4] = new Dog("루키", "시바견");

        for (int i = 0; i < mydog.length; i++)
            System.out.println(mydog[i].showDogInfo());

        System.out.println("\n=== 향상된 for문 사용 ===");
        for (Dog dog : mydog) {
            System.out.println(dog.showDogInfo());
        }
    }
}
