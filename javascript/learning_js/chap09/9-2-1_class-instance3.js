// 9.2.1 클래스와 인스턴스 생성

// Car 클래스 수정 (실수로 기어 프로퍼티를 고치지 안도록)
class Car {
  constructor(make, model) {
    this.make = make;
    this.model = model;
    this._userGears = ['P', 'N', 'R', 'D'];
    this._userGear = this.userGears[0];
  }

  get userGear() { return this._userGear; }
  set userGear(value) {
    if (this._userGears.indexOf(value) < 0)
      throw new Error(`Invalid gear: ${value}`);
    this._userGear = value;
  }

  shift(gear) { this.userGear = gear; }
}

// Car 인스턴스 생성, 인스턴스를 만들 때는 new 키워드를 사용
const car1 = new Car('Tesla', 'Model S');
const car2 = new Car('Mazda', '3i');
Car.shift('D');
Car.shift('R');
