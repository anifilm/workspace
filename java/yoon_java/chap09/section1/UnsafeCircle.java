// 정보를 은닉해야 하는 이유
class Circle {
    final double PI = 3.14;
    double radius = 0;  // 원의 반지름

    public Circle(double r) {
        setRad(r);  // 아래에 정의된 setRad 메서드 호출을 통한 초기화
    }
    public void setRad(double r) {
        if (r < 0) {  // 반지름은 0보다 작을 수 없으므로
            radius = 0;
            return;
        }
        radius = r;
    }
    public double getRadius() { return radius; }
    public double getArea() {
        return radius * radius * PI;  // 원의 넓이 반환
    }
}

class UnsafeCircle {
    public static void main(String[] args) {
        Circle c = new Circle(1.5);
        System.out.println("반지름: " + c.getRadius());
        System.out.println("넓이: " + c.getArea());

        c.setRad(3.4);
        System.out.println("반지름: " + c.getRadius());
        System.out.println("넓이: " + c.getArea());

        c.setRad(-3.3);
        System.out.println("반지름: " + c.getRadius());
        System.out.println("넓이: " + c.getArea());

        c.radius = -4.5;  // 옳지 않은 접근 방법, 그리고 문제가 되는 부분
        System.out.println("반지름: " + c.getRadius());
        System.out.println("넓이: " + c.getArea());
    }
}

/*

위의 메서드 정의에서 Circle 클래스를 정의한 부분에 대한 의도는 다음과 같다.

  "반지름의 길이 radius에 0보다 작은 값이 저장되는 일이 발생하지 않도록 하겠다."

때문에 이러한 의도를 따르기 위해서는 반지름의 길이를 변경할 때에는 반드시 위의 메서드 호출을 통해서만 변경을 진행해야
한다. 이렇듯 인스턴스 변수에 저장되는 값의 종류와 범위는 해당 클래스를 정의한 사람이 가장 정확하게 알고있다. 따라서
클래스 사용자가 잘못된 값을 인스턴스 변수에 저장하지 않도록 위와 같은 유형의 메서드를 제공해야 한다. 그런데 위의 예제
에서는 프로그램 사용자의 실수로 다음과 같은 잘못된 접근이 발생하였다.

  c.radius = -4.5;  // 옳지 않은 접근 방법

이렇듯 인스턴스 변수의 직접적인 접근을 허용하게 되면 컴파일 과정에서 드러나지 않는 중대한 실수가 발생할 가능성이 있다.
이러한 오류는 실행 결과에서 잘 드러나지 않기 때문에 더 큰 문제가 된다. 때문에 위와 같은 접근을 허용하지 않도록 클래스
를 설계할 필요가 있다. 그리고 이러한 클래스의 설계를 가리켜 '정보 은닉'이라 한다.

 */
