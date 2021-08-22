// 예제 8-17 함수를 합성하는 함수

function compose(f, g) {
  return function (x) {
    return f(g(x));
  };
}

const square = function (x) { return x * x; };
const add1 = function (x) { return x + 1; };
const h = compose(square, add1); // h(x)=(x+1)*(x+1)
console.log(h(2)); // 9
