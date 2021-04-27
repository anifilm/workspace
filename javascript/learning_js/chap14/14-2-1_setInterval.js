// 14.2.1 setInterval과 clearInterval

// setInterval은 콜백을 정해진 주기마다 호출하며 clearInterval을 사용할 때까지
// 멈추지 않습니다.

// 다음 예제는 분이 넘어가거나 10회째가 될 때까지 5초마다 콜백을 실행합니다.
const start = new Date();
let i = 0;
const intervalId = setInterval(function () {
  let now = new Date();
  if (now.getMinutes() !== start.getMinutes() || ++i > 10) {
    return clearInterval(intervalId);
  }
  console.log(`${i}: ${now}`);
}, 5 * 1000);
