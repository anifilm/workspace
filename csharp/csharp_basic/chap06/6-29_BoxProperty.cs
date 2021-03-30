using System;

class Box {
    // 변수와 속성
    private int width;
    public int Width { // 속성 Width를 지정
        get {
            return width;
        }
        set {
            if (value > 0) {
                width = value;
            }
            else {
                Console.WriteLine("너비는 자연수를 입력해주세요");
            }
        }
    }

    private int height;
    public int Height { // 속성 Height를 지정
        get {
            return height;
        }
        set {
            if (value > 0) {
                height = value;
            }
            else {
                Console.WriteLine("높이는 자연수를 입력해주세요");
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

class BoxProperty {
    static void Main(string[] args) {

        Box box = new Box(-10, -20);

        box.Width = -200;
        box.Height = -100;

        /*
        인스턴스(멤버) 변수가 public인 것과 같지만 값에 대하여 제한적인 입출력이 가능해지기
        때문에 get, set의 사용에 대한 의미가 있다.
        */
    }
}
