// 5.1 화살표 함수 표현식의 작성법

// 5.1.1 매개변수가 없을 때

const f = function () {
  return '100';
};

console.log(f()); // 100

const af = () => {
  return '100';
};

console.log(af()); // 100


// 5.1.2 매개변수가 하나일 때

const f = function (a) {
  return 100 + a;
};

console.log(f(5)); // 105

const af = (a) => {
  return 100 + a;
};

console.log(af(5)); // 105

// 함수 매개변수가 1개일 때는 괄호 생략 가능

const af2 = a => {
  return 100 + a;
};

console.log(af2(5)); // 105


// 5.1.3 매개변수가 2개 이상일 때

const f = function (a, b) {
  return a + b;
};

console.log(f(100, 5)); // 105

// 함수 매개변수가 2개 이상일 대는 괄호 생략 불가
const af = (a, b) => {
  return a + b;
};

console.log(f(100, 5)); // 105
