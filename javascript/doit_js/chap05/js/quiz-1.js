function sumMulti(a, b) {
  var result;
  if (a === b) {
    result = a * b;
  } else {
    result = a + b;
  }
  return result;
}

console.log(sumMulti(5, 10));
console.log(sumMulti(10, 10));
