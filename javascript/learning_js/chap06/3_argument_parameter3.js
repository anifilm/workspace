// 6.3 함수와 매개변수

function f(o) {
  o.message = `f 안에서 수정함 (이전 값: '${o.message}')`;
}

let o = {
  message: '초기 값',
};
console.log(`f를 호출하기 전: o.message="${o.message}"`);

f(o);
console.log(`f를 호출한 다음: o.message="${o.message}"`);

/*
o.message는 객체이므로 함수의 매개변수에 전달시 참조로 전달되며 함수에서 내용 수정시 원본값도 변경된다.
*/
