// 14.1 배열 리터럴 전개

const colorArray = ['red', 'green', 'blue'];
const newColorArray = [...colorArray, 'orange'];

console.log(colorArray); // ['red', 'green', 'blue']
console.log(newColorArray); // ['red', 'green', 'blue', 'orange']

const numArray = [2, 3, 4];
const newNumArray = [1, ...numArray, 5];

console.log(numArray); // [2, 3, 4]
console.log(newNumArray); // [1, 2, 3, 4, 5]
