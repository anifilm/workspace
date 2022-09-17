package chap20;

class Npc4 {
    public String toString() {
        return "This is a Npc4.";
    }
}

class Tank4 {
    public String toString() {
        return "This is a Tank4.";
    }
}

class Camp4 {
    private Object unit;

    public void set(Object unit) {
        this.unit = unit;
    }

    public Object get() {
        return unit;
    }
}

class Ex04_MyGame4 {
    public static void main(String[] args) {
        // 게임 종족 생성
        Camp4 human = new Camp4();
        Camp4 machine = new Camp4();

        // 게임 종족에 유닛을 생성해 담기
        // 우리가 만든 유닛을 넣어야 하는데...
        human.set("난 공룡");
        machine.set("난 우주인");

        System.out.println(human.get());
        System.out.println(machine.get());
    }
}
