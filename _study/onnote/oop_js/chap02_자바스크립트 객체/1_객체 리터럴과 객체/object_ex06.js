// 1.4.1 프로퍼티 정의

let coffee = {
  _name: 'Americano',
  get name() {
    console.log('call getter');
    return this._name;
  },
  set name(value) {
    console.log('call setter');
    this._name = value;
  }
};

console.log(coffee.name);  // call getter
                           // Americano

console.log(coffee._name); // Americano

coffee.name = 'Cappuccino' // call setter

console.log(coffee.name);  // call getter
                           // Cappuccino
