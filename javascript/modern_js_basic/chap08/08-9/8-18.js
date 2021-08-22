// 예제 8-18 함수를 합성하는 함수 (인수를 여러 개 받을 수 있음)

function compose(f, g) {
  return function () {
    return f.call(this, g.apply(this, arguments));
  };
}

const square = function (x) { return x * x; };
const add = function (x, y) { return x + y; };
const h = compose(square, add);
console.log(h(2, 3)); // 25
