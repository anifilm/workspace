// 11.2 생성자와 프로토타입

function Coffee() {
  this.name = 'Americano';
};

console.log(Coffee); // ƒ Coffee() {...}

console.log(typeof Coffee); // function

// 함수 객체가 기본적으로 prototype 프로퍼티를 가지고 있다.
console.log(Coffee.prototype); // {constructor: ƒ}

// 기본적으로 비어있는 객체를 가리킨다.
console.log(typeof Coffee.prototype); // object

if (Coffee.prototype === Object.prototype) {
  console.log('Coffee.prototype equals Object.prototype');
}
else {
  console.log('Coffee.prototype not equals Object.prototype');
}
// Coffee.prototype not equals Object.prototype

console.log(typeof Coffee.__proto__); // function

if (Coffee.__proto__ === Function.prototype) {
  console.log('Coffee.__proto__ equals Function.prototype');
}
// Coffee.__proto__ equals Function.prototype
