class Unit {  // [1] 부모 클래스
    String name;
    int hp;

    void printUnit() {
        System.out.println("이름: " + name);
        System.out.println("HP: " + hp);
    }
}

class Marine extends Unit  {  // [2] 자식 클래스
    int attack;

    void printMarine() {  // [3]
        printUnit();
        System.out.println("공격력: " + attack);  // [4]
    }
}

class Medic extends Unit {  // [5] 자식 클래스
    int heal;  // [6] 멤버 변수

    void printMedic() {  // [7]
        printUnit();
        System.out.println("치유량: " + heal);
    }
}

public class MyTerran {
    public static void main(String[] args) {
        Marine unit1 = new Marine();  // [8] 객체 생성
        unit1.name = "마린";  // [9]
        unit1.hp = 100;  // [10]
        unit1.attack = 20;

        Medic unit2 = new Medic();
        unit2.name = "메딕";
        unit2.hp = 120;
        unit2.heal = 10;

        unit1.printMarine();
        System.out.println();
        unit2.printMedic();
    }
}
