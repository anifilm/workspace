// 9.2.6 프로토타입의 확인

// instanceof 연산자
function F() {}
var obj = new F();
console.log(obj instanceof F);      // true
console.log(obj instanceof Object); // true
console.log(obj instanceof Date);   // false

// isPrototypeOf 메서드
function F() {}
var obj = new F();
console.log(F.prototype.isPrototypeOf(obj));      // true
console.log(Object.prototype.isPrototypeOf(obj)); // true
console.log(Date.prototype.isPrototypeOf(obj));   // false
