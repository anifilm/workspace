'use strict';
const { Student } = require('../model/Student');
const { Address } = require('../model/Address');

// 코드 2-2 재귀 함수로 객체를 깊이 동결함
var isObject = (val) => val && typeof val === 'object';

function deepFreeze(obj) {
  if (isObject(obj) && !Object.isFrozen(obj)) {
    Object.keys(obj).forEach((name) => deepFreeze(obj[name]));
    Object.freeze(obj);
  }
  return obj;
}

let address = new Address('US');
let student = new Student(
  '444-44-4444',
  'Joe',
  'Smith',
  'Harvard',
  1960,
  address,
);

let frozenStudent = deepFreeze(student);
console.log(frozenStudent);

//frozenStudent.firstname = 'Emmet';
// '#<Student>' 객체의 읽기 전용 속성 '_firstname'에 값을 할당할 수 없음.

//frozenStudent.address.country = 'Canada';
// '#<Address>' 객체의 읽기 전용 속성 '_country'에 값을 할당할 수 없음.
