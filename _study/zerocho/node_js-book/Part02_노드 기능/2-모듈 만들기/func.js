const { odd, even } = require('./var.js');

function checkOddEven(num) {
  if (num % 2) { // 홀수면
    return odd;
  }
  return even
}

module.exports = checkOddEven;
