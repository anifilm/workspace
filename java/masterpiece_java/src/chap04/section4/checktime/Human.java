/*
1. String 타입의 name, int 타입의 age, double 타입의 height, weight 등 네 개의 필드를 갖는 Human 클래스를 작성하라. 생성자를
   작성하여 String 타입의 이름을 전달받아 멤버 name에 저장하라.

2. 문제1에 main() 메서드를 추가하여 레퍼런스 변수명을 aHuman으로 하고 Human 객체를 생성한 후 name 필드를 "홍길동"으로, age는 21,
   height는 180.5, weight는 73.2를 각각 대입하라.

3. 배열의 크기가 5인 Human 타입의 객체 배열을 생성하라.

 */
package chap04.section4.checktime;

public class Human {
    String name;
    int age;
    double height, weight;

    public Human(String name, int age, double height, double weight) {
        this.name = name;
        this.age = age;
        this.height = height;
        this.weight = weight;
    }

    public void show() {
        System.out.println("이름은 " + name);
        System.out.println("나이는 " + age);
        System.out.println("키는 " + height);
        System.out.println("몸무게는 " + weight);
        System.out.println();
    }

    public static void main(String[] args) {
        Human humans[] = new Human[5];

        humans[0] = new Human("홍길동", 21, 180.5, 73.2);
        humans[1] = new Human("임채영", 44, 169.8, 70.5);
        humans[2] = new Human("정흥규", 44, 165.5, 84.6);
        humans[3] = new Human("서환길", 44, 167.4, 76.3);
        humans[4] = new Human("안재훈", 44, 182.2, 89.9);

        for (int i = 0; i < humans.length; i++)
            humans[i].show();
    }
}
