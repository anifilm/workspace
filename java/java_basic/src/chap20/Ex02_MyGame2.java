package chap20;

class Npc2 {
    public String toString() {
        return "This is a Npc2.";
    }
}

class Tank2 {
    public String toString() {
        return "This is a Tank2.";
    }
}

class Camp2 {
    private Object unit;

    public void set(Object unit) {  // [1]
        this.unit = unit;
    }

    public Object get() {
        return unit;
    }
}

class Ex02_MyGame2 {
    public static void main(String[] args) {
        // 게임 종족 생성
        Camp2 human = new Camp2();
        Camp2 machine = new Camp2();

        // 게임 종족에 유닛을 생성해 담기
        // 자식 객체를 부모 타입의 변수에 대입
        human.set(new Npc2());
        machine.set(new Tank2());

        // 게임 종족에서 유닛을 가져오기
        // 꺼낼 때 형변환이 필요함
        Npc2 hUnit = (Npc2)human.get();  // [2]
        Tank2 mUnit = (Tank2)machine.get();

        System.out.println(hUnit);
        System.out.println(mUnit);
    }
}
