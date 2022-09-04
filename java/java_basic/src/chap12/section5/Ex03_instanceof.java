package chap12.section5;

interface Cry {
    void cry();
}

class Cat implements Cry {
    public void cry() {
        System.out.println("야옹~");
    }
}

class Dog implements Cry {
    public void cry() {
        System.out.println("멍멍!");
    }
}

public class Ex03_instanceof {
    public static void main(String[] args) {
        Cry test1 = new Cat();  // [1]
    //  Cry test1 = new Dog();

        if (test1 instanceof Cat) {  // [2]
            test1.cry();
        }
        else if (test1 instanceof Dog) {
            System.out.println("고양이가 아닙니다.");
        }
    }
}
