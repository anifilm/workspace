// 14.2 함수 인수 목록 전개

function myPrint(a, b, c) {
  console.log(a);
  console.log(b);
  console.log(c);
}

const array = [1, 2, 3];

console.log(array); // [1, 2, 3]

myPrint(...array);
// 1
// 2
// 3

const stringArray = [...'xyz'];

console.log(stringArray); // ['x', 'y', 'z']

myPrint(...stringArray);
// x
// y
// z
