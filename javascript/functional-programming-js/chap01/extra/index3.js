const input = [80, 90, 100];

const sum = (total, current) => total + current;
const total = arr => arr.reduce(sum);
const size = arr => arr.length;
const divide = (a, b) => a / b;
const average = arr => divide(total(arr), size(arr));

const result = average(input);
console.log(result);
