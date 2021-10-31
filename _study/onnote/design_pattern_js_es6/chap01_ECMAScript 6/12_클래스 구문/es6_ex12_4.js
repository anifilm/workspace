// 12.4 정적 메서드

class Coffee {
  constructor(name) {
    this._name = name;

    // 정적 프로퍼티
    Coffee.salesVolumn += 1;
  }

  // getter 함수
  get name() {
    console.log('call getter');
    return this._name;
  }
  // setter 함수
  set name(name) {
    console.log('call setter');
    this._name = name;
  }

  display() {
    console.log(this._name);
  }

  // 정적 메서드
  static getSalesVolume() {
    return Coffee.salesVolumn;
  }
}

// 정적 프로퍼티 초기화
Coffee.salesVolumn = 0;

let coffee = new Coffee('Americano');

console.log(coffee.name);
// call getter
// Americano

// 정적 메서드 호출
console.log(Coffee.getSalesVolume()); // 1

coffee = new Coffee('Espresso');

console.log(coffee.name);
// call setter
// Espresso

// 정적 메서드 호출
console.log(Coffee.getSalesVolume()); // 2
