// 4.2.11 블록 유효 범위: let과 const

// let 선언자
let x = 'outer x';
{
  let x = 'inner x';
  let y = 'inner y';
  console.log(x); // inner x
  console.log(y); // inner y
}
console.log(x); // outer x
console.log(y); // ReferenceError: y is not defined

// const 선언자
const c = 2;
c = 5; // Uncaught TypeError

const origin = { x: 1, y: 2 };
origin.x = 3;
console.log(origin); // { x: 3, y: 2 }
