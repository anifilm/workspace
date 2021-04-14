using System;

class Box {
    private int width;
    public int Width {
        get { return width; }
        set {
            if (value > 0) {
                width = value;
            } else {
                throw new Exception("너비는 자연수를 입력해주세요.");
            }
        }
    }

    private int height;
    public int Height {
        get { return height; }
        set {
            if (value > 0) {
                height = value;
            } else {
                throw new Exception("높이는 자연수를 입력해주세요.");
            }
        }
    }

    // 생성자
    public Box(int width, int height) {
        Width = width;
        Height = height;
    }

    // 인스턴스 메서드
    public int Area() {
        return this.width * this.height;
    }
}

class ThrowWithBox {
    static void Main(string[] args) {
        // Box 클래스 예외 관련 구현
        try {
            Box box = new Box(-10, -20);
        }
        catch (Exception e) {
            Console.WriteLine(e);
        }
    }
}
