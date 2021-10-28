// 1.4.2 실제 데이터 프로퍼티 캡슐화

let coffee = (function () {
  let _name = 'Americano';
  return {
    get name() {
      console.log('call getter');
      return _name;
    },
    set name(value) {
      console.log('call setter');
      _name = value;
    }
  };
}());

console.log(coffee.name);  // call getter
                           // Americano

console.log(coffee._name); // undefined

coffee.name = 'Cappuccino' // call setter

console.log(coffee.name);  // call getter
                           // Cappuccino
