using System;

// 6-26: Box 클래스
class BoxA {
    public int width;
    public int height;

    public BoxA(int width, int height) {
        this.width = width;
        this.height = height;
    }

    public int Area() {
        return this.width * this.height;
    }
}

// 6-27: 멤버 변수 width와 height를 private 수정
class BoxB {
    private int width;
    private int height;

    public BoxB(int width, int height) {
        // 객체 생성시 값을 양수로만 입력하도록 제한
        if (width > 0 || height > 0) {
            this.width = width;
            this.height = height;
        }
        else {
            Console.WriteLine("너비와 높이는 자연수로 초기화해주세요!");
        }
    }

    public int Area() {
        return this.width * this.height;
    }
}

// 6-28: 겟터와 셋터
class BoxC {
    // 멤버 변수
    private int width;
    private int height;

    // 생성자
    public BoxC(int width, int height) {
        if (width > 0 || height > 0) {
            this.width = width;
            this.height = height;
        }
        else {
            Console.WriteLine("너비와 높이는 자연수로 초기화해주세요!");
        }
    }

    // 인스턴스 메서드
    public int Area() {
        return this.width * this.height;
    }

    // Getter
    public int GetWidth() {
        return width;
    }

    public int GetHeight() {
        return height;
    }

    // Setter
    public void SetWidth(int width) {
        if (width > 0) {
            this.width = width;
        }
        else {
            Console.WriteLine("너비는 자연수를 입력해주세요");
        }
    }

    public void SetHeight(int height) {
        if (height > 0) {
            this.height = height;
        }
        else {
            Console.WriteLine("높이는 자연수를 입력해주세요");
        }
    }
}

class Boxes {
    static void Main(string[] args) {
        //
    }
}
