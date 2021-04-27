// 14.2.2 스코프와 비동기적 실행

function countdown() {
  console.log('Countdown:');
  for (let i = 5; i >= 0; i--) {
    setTimeout(function () {
      console.log(i === 0 ? 'Go!' : i);
    }, (5 - i) * 1000);
  }
}

countdown();
