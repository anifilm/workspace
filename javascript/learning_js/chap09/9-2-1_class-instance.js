// 9.2.1 클래스와 인스턴스 생성

// Car 클래스 선언
class Car {
  constructor() {
  }
}

// Car 인스턴스 생성, 인스턴스를 만들 때는 new 키워드를 사용
const car1 = new Car();
const car2 = new Car();

// 객체가 클래스의 인스턴스인지 확인하는 instaneof 연산자
car1 instanceof Car   // true
car1 instanceof Array // false
