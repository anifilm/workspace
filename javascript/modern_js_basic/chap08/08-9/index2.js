// 8.9.6 커링

const pow = function (exponent) {
  return function (base) {
    return Math.pow(base, exponent);
  };
};

const square = pow(2);
const sqrt = pow(.5);
const cubicroot = pow(1/3);

console.log('square(2) =', square(2));
console.log('sqrt(2) =', sqrt(2));
console.log('cubicroot(2) =', cubicroot(2));


const sum = function (a, b) { return a + b; };
const arr = [1, 2, 3, 4];
const abs_arr = pow(.5)(arr.map(pow(2)).reduce(sum));
