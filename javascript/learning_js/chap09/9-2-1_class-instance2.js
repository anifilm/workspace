// 9.2.1 클래스와 인스턴스 생성

// Car 클래스 선언 (제조사와 모델 데이터, 변속 기능 추가)
class Car {
  constructor(make, model) {
    this.make = make;
    this.model = model;
    this.userGears = ['P', 'N', 'R', 'D'];
    this.userGear = this.userGears[0];
  }
  shift(gear) {
    if (this.userGears.indexOf(gear) < 0)
      throw new Error(`Invalid gear: ${gear}`);
    this.userGear = gear;
  }
}

// Car 인스턴스 생성, 인스턴스를 만들 때는 new 키워드를 사용
const car1 = new Car('Tesla', 'Model S');
const car2 = new Car('Mazda', '3i');
Car.shift('D');
Car.shift('R');
