package chap12.section5;

abstract class Human {
    abstract void print();
}

class Man extends Human {
    void print() {
        System.out.println("남자 생성");
    }
}

class Woman extends Human {
    void print() {
        System.out.println("여자 생성");
    }
}

class Ex01_Polymorphism2 {
    public static Human humanCreate(int kind) {
        if (kind == 1) {
            //Human m = new Man();  // [2]
            //return m;
            return new Man();  // [3]
        }
        else {
            //Human w = new Woman();
            //return w;
            return new Woman();
        }
    }
    public static void main(String[] args) {
        // 생성된 객체가 남자인지 여자인지 중요하지 않고
        // 난 생성된 객체의 프린트 기능만 쓸 것이다.
        // 남자이면 남자애가 가진 기능을 할 것이고,
        // 여자이면 여자애가 가진 기능을 할 것이다.
        Human h1 = humanCreate(1);
        h1.print();

        Human h2 = humanCreate(2);
        h2.print();
    }
}
