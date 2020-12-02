// instanceof로 원래 인스턴스형 확인 후 다운 캐스팅하기
package chap08.section6.polymorphism;
import java.util.ArrayList;

class Animal {
    public void move() {
        System.out.println("동물이 움직입니다.");
    }
}

class Human extends Animal {
    public void move() {
        System.out.println("사람이 두 발로 걷습니다.");
    }
    public void readBook() {
        System.out.println("사람이 책을 읽습니다.");
    }
}

class Tiger extends Animal {
    public void move() {
        System.out.println("호랑이가 네 발로 뜁니다.");
    }
    public void hunting() {
        System.out.println("호랑이가 사냥을 합니다.");
    }
}

class Eagle extends Animal {
    public void move() {
        System.out.println("독수리가 하늘을 납니다.");
    }
    public void flying() {
        System.out.println("독수라가 날개를 쭉 펴고 멀리 날아갑니다.");
    }
}

public class AnimalTest {
    ArrayList<Animal> animalList = new ArrayList<Animal>();
    public static void main(String[] args) {

        AnimalTest aTest = new AnimalTest();

        aTest.addAnimal();

        System.out.println("\n====== 원래 형으로 다운 캐스팅 ======");
        aTest.testCasting();
    }

    public void addAnimal() {
        // ArrayList에 추가 되면서 Animal형으로 형 변환
        animalList.add(new Human());
        animalList.add(new Tiger());
        animalList.add(new Eagle());

        // 배열 요소를 Animal형으로 꺼내서 move()를 호출하면 재정의된 함수가 호출됨
        for (Animal animal : animalList) {
            animal.move();
        }
    }

    public void testCasting() {
        for (int i = 0; i < animalList.size(); i++) {   // 모든 배열 요소를 하나씩 돌면서
            Animal animal = animalList.get(i);          // Animal형으로 가져옴
            if (animal instanceof Human) {              // Human이면
                Human h = (Human)animal;                // Human형으로 다운 캐스팅
                h.readBook();
            } else if (animal instanceof Tiger) {
                Tiger t = (Tiger)animal;
                t.hunting();
            } else if (animal instanceof Eagle) {
                Eagle e = (Eagle)animal;
                e.flying();
            } else {
                System.out.println("지원되지 않는 형입니다.");
            }
        }
    }
}
