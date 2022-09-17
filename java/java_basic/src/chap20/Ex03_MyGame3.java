package chap20;

class Npc3 {
    public String toString() {
        return "This is a Npc3.";
    }
}

class Tank3 {
    public String toString() {
        return "This is a Tank3.";
    }
}

class Camp3 {
    private Object unit;

    public void set(Object unit) {
        this.unit = unit;
    }

    public Object get() {
        return unit;
    }
}

class Ex03_MyGame3 {
    public static void main(String[] args) {
        // 게임 종족 생성
        Camp3 human = new Camp3();
        Camp3 machine = new Camp3();

        // 게임 종족에 유닛을 생성해 담기
        // 우리가 만든 유닛을 넣어야 하는데...
        human.set("난 공룡");  // <-- human.set(new String("난 공룡"));  // [1]
        machine.set("난 우주인");

        // 게임 종족에서 유닛을 가져오기
        // 꺼낼 때 당연히 게임 유닛을 기대하는데... 컴파일 타임 에러 발생!
        Npc3 hUnit = (Npc3)human.get();  // [2]
        Tank3 mUnit = (Tank3)machine.get();

        System.out.println(hUnit);
        System.out.println(mUnit);
    }
}
