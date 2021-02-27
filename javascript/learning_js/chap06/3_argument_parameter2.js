// 6.3 함수와 매개변수

function f(x) {
  console.log(`f 내부: x=${x}`);
  x = 5;
  console.log(`f 내부: x=${x} (할당 후)`);
}

let x = 3;
console.log(`f를 호출하기 전: x=${x}`);

f(x);
console.log(`f를 호출한 다음: x=${x}`);
