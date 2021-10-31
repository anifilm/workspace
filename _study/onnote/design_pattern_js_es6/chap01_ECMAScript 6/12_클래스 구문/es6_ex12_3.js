// 12.3 접근자

class Coffee {
  constructor(name) {
    this._name = name;
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
}

const coffee = new Coffee('Americano');

console.log(coffee.name);
// call getter
// Americano

coffee.name = 'Espresso';
// call setter

console.log(coffee.name);
// call setter
// Espresso

coffee.display(); // Espresso
