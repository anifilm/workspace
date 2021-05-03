// 12.7.5 순수 함수와 비순수 함수

// 예제 12-57
var count = 0; // 현재 카운트를 나타내는 상태: increase 함수에 의해 변환한다.

// 비순수 함수
function increase(n) {
  return ++count; // 외부 상태에 의존하며 외부 상태를 변경한다.
}

// 비순수 함수는 외부 상태(count)를 변경하므로 상태 변화를 추적하기 어려워진다.
increase();
console.log(count); // 1

increase();
console.log(count); // 2
