/*
불변 객체
지금까지 살펴본 변경 방지 메서드들은 얕은 변경 방지(shallow only)로 직속 프로퍼티만 변경이 방지되고 중첩 객체까지는 영향을 주지 못한다.
따라서 Object.freeze 메서드로 객체를 동결하여도 중첩 객체까지 동결할 수 없다.
*/

const person = {
  name: 'Lee',
  address: { city: 'Seoul' }
};

// 얕은 객체 동결
Object.freeze(person);

// 직속 프로퍼티만 동결한다.
console.log(Object.isFrozen(person)); // true
// 중첩 객체까지 동결하지 못한다.
console.log(Object.isFrozen(person.address)); // false

person.address.city = 'Busan';
console.log(person); // { name: "Lee", address: { city: "Busan" } }
