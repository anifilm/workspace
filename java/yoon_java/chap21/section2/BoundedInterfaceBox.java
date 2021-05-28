// 제네릭 클래스의 타입 인자를 인터페이스로 제한하기
interface Eatable {
    public String eat();
}

class Apple implements Eatable {
    public String toString() {
        return "I am  an apple.";
    }

    @Override
    public String eat() {
        return "It tastes so good!";
    }
}

class Box<T extends Eatable> {
    T ob;

    public void set(T o) {
        ob = o;
    }
    public T get() {
        System.out.println(ob.eat()); // Eatable로 제한하였기에 eat 호출 가능
        return ob;
    }
}

class BoundedInterfaceBox {
    public static void main(String[] args) {
        Box<Apple> box = new Box<>();
        box.set(new Apple()); // 사과 저장

        Apple ap = box.get(); // 사과 꺼내기
        System.out.println(ap);
    }
}
