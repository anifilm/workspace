// 6.3.1 매개변수가 함수를 결정하는가?

function f(x) {
  return `in f: x=${x}`;
}

f(); // "in f: x=undefined"

/*
어떤 함수를 호출하든 그 함수에서 정해진 매개변수 숫자와 관계없이 몇 개의 매개변수를 전달해도 됩니다.
정해진 매개변수에 값을 제공하지 않으면 암시적으로 undefined가 할당됩니다.
*/
