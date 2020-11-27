/*
Q4
다음 코드의 출력 결과가 '진돗개 멍멍이'가 되도록 MyDog 클래스를 수정하세요.
 */
package exercise;

class MyDog {
    String name;
    String type;

    MyDog(String name, String type) {
        this.name = name;
        this.type = type;
    }

    public String toString() {
        return type + " " + name;
    }
}

public class Q4 {
    public static void main(String[] args) {

        MyDog dog = new MyDog("멍멍이", "진돗개");
        System.out.println(dog);
    }
}
