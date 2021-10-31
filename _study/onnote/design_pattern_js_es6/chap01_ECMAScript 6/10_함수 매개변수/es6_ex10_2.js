// 10.2 매개변수의 기본값

// 10.2.1 기본값 사용하지 않을 때

function add(a, b) {
  console.log(`a = ${a}`);
  console.log(`b = ${b}`);

  return a + b;
}

const sum = add(1);
// a = 1
// b = undefined

console.log(sum); // NaN


// 10.2.2 기본값 사용할 때

function add(a, b = 10) {
  console.log(`a = ${a}`);
  console.log(`b = ${b}`);

  return a + b;
}

const sum = add(1);
// a = 1
// b = 10

console.log(sum); // 11
