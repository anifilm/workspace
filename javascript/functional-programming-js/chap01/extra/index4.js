var input = [80, 90, 100];

var sum = (total, current) => total + current;
var total = arr => arr.reduce(sum);
var size = arr => arr.length;
var divide = (a, b) => a / b;
var average = arr => divide(total(arr), size(arr));

var result = average(input);
console.log(result);
