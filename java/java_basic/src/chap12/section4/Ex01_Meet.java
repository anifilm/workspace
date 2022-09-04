package chap12.section4;

interface Greet {  // [1] 인터페이스
    void greet();
}

interface Talk {  // [2] 인터페이스
    void talk();
}

class Morning implements Greet, Talk {  // [3] 인터페이스 구현
    public void greet() {
        System.out.println("안녕하세요!");
    }

    public void talk() {
        System.out.println("날씨 좋네요.");
    }
}

public class Ex01_Meet {
    public static void main(String[] args) {  // [4]
        Morning morning = new Morning();  // [5]
        morning.greet();  // [6]
        morning.talk();   // [7]
    }
}
