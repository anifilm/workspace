// 13.3 함수로서의 함수

/*
함수의 수학적인 정의에 충실한 함수를 순수 함수(pure function)라고 한다.

순수 함수는 입력이 같으면 결과도 반드시 같다.
isCurrentYearLeapYear는 언제 호출하느냐에 따라 결과가 다르기 때문에 순수 함수라고
할 수 없다.
순수 함수는 부수 효과(side effect)가 없어야 한다. 즉 함수를 호출한다고 해서
프로그램의 상태가 변경되어서는 안된다는 뜻이다.
*/

const colors = [
  'red',
  'orange',
  'yellow',
  'green',
  'blue',
  'indigo',
  'violet',
];
let colorIndex = -1;
function getNextRainbowColor() {
  if (colorIndex++ >= colors.length) colorIndex = 0;
  return colors[colorIndex];
}

/*
위의 getNextRainbowColor 함수는 호출시 마다 무지개의 일곱 가지 색깔을 하나씩 반환
한다. 이 함수는 순수 함수의 두 가지 정의를 모두 어긴다.
입력이 같아도(매개변수가 없음) 결과가 항상 다르고, 변수 colorIndex를 바꾸는 부수 효과
가 있다. colorIndex 변수는 getNextRainbowColor 함수에 속하지 않는데도 함수를 호출
하면 변수가 변경된다. 이것은 부수 효과이다.

getNextRainbowColor 함수를 순수 함수로 수정하려면 다소 번거롭다. 먼저 외부 변수를
클로저로 감싸는 방법을 보자.
*/

const getNextRainbowColor = (function () {
  const colors = [
    'red',
    'orange',
    'yellow',
    'green',
    'blue',
    'indigo',
    'violet',
  ];
  let colorIndex = -1;
  return function () {
    if (colorIndex++ >= colors.length) colorIndex = 0;
    return colors[colorIndex];
  };
})();

/*
이제 부수 효과는 없어졌지만, 아직은 입력이 같아도 결과가 다를 수 있으므로 순수 함수라고
볼 수 없다.

위의 함수는 다음과 같은 코드에서 사용된다고 하자. (브라우저의 어떤 요소의 색깔을 0.5초 마다 변경한다.)
*/

setInterval(function () {
  document.querySelector('.rainbow')
    .style['background-color'] = getNextRainbowColor();
}, 500);

/*
이 코드는 의도가 명확하다. 클래스가 rainbow인 HTML 요소의 색깔을 계속 변경하는 것이다.
문제는, 만약 프로그램의 다른 부분에서 getNextRainbowColor()를 호출한다면 이 코드도
그 영향을 받게 된다는 점이다.

여기서는 다음과 같이 이터레이터를 사용하는 것이 더 나은 방법이다.
*/

function getNextRainbowInterator() {
  const colors = [
    'red',
    'orange',
    'yellow',
    'green',
    'blue',
    'indigo',
    'violet',
  ];
  let colorIndex = -1;
  return {
    next() {
      if (colorIndex++ >= colors.length) colorIndex = 0;
      return { value: colors[colorIndex], done: false };
    }
  };
}

/*
이제 getRainbowIterator는 순수 함수이다. 이 함수는 항상 같은 것(이터레이터)을 반환
하며 외부에 아무 영향도 주지 않는다. 사용법이 바꼈지만 훨씬 안전하다.
*/

const rainbowIterator = getRainbowIterator();
setInterval(function () {
  document.querySelector('.rainbow')
    .style['background-color'] = rainbowIterator.next().value;
}, 500);
