abstract class Animal {
    abstract void doMove();
}

class Tiger extends Animal {
    void doMove() {
        System.out.println("호랑이는 산을 달립니다.");
    }
}

class Lion extends Animal {
    void doMove() {
        System.out.println("사자는 평원을 달립니다.");
    }
}

public class Ex04_Polymorphism3 {
    public static void animalChoose(Animal obj) {  // [1]
        if (obj instanceof Tiger) {
            Tiger tiger = (Tiger)obj;  // [2]
            tiger.doMove();
        }
        else {
            Lion lion = (Lion)obj;  // [3]
            lion.doMove();
        }
    }

    public static void main(String[] args) {
        Tiger tiger = new Tiger();
        animalChoose(tiger);

        Lion lion = new Lion();
        animalChoose(lion);
    }
}
