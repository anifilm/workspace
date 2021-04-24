// 8.5 배열의 마법 reduce

/* reduce 메서드를 사용한 배열의 숫자를 더하는 단순한 예제
첫 번째 매개변수 a: 값을 누적하여 결과를 반환, 어큐뮬레이터(accumulator)
두 번째 매개변수 x: 현재 배열 요소
이하 매개변수는 현재 인덱스, 배열 원본을 가진다.

마지막에 선언된 옵션은 a의 초기값 0
*/
const arr = [5, 7, 2, 4];
const sum = arr.reduce((a, x) => a += x, 0);

/*
단계별 설명
1. 첫 번째 배열 요소 5에서 (익명) 함수를 호출
   a의 초기값은 0, x는 5
   함수는 a와 x의 합을 a에 재할당
2. 두 번째 배열 요소 7에서 함수를 호출
   a의 초기값은 이전 단계에 할당된 5, x는 7
   함수는 a와 x의 합 12를 재할당
3. 세 번째 배열 요소 2에서 함수를 호출
   a는 12, x는 2
   함수는 a와 x의 합 14를 재할당
4. 네 번째(마지막) 배열 요소 4에서 함수를 호출
   a는 14, x는 4
   함수는 a와 x의 합 18을 할당하고 해당 값이 반환되어 sum에 할당된다.
*/

/*
다음과 같이 초기값이 생략되었다면 초기값은 배열의 첫 번째 요소가 되고,
두 번째 요소부터 함수를 호출하게 된다.
*/
const sum2 = arr.reduce((a, x) => a += x);

/*
단계는 하나 줄었지만 결과는 같다.
배열의 첫 번째 요소가 그대로 초기값이 될 수 있다면 초기값을 생략할 수 있다.
*/

// reduce와 함께 객체 사용 예제
const words = [
  'Beachball',
  'Rodeo',
  'Angel',
  'Aardvark',
  'Xylophone',
  'November',
  'Chocolate',
  'Papaya',
  'Uniform',
  'Joker',
  'Clover',
  'Bali',
];
const alphabetical = words.reduce((a, x) => {
  if (!a[x[0]]) a[x[0]] = [];
  a[x[0]].push(x);
  return a;
}, {});

// reduce를 통계에 사용한 예제 (데이터 셋의 평균과 분산을 계산)
const data = [3.3, 5, 7.2, 12, 4, 6, 10.3];
// 도널드 커누스(Donald Knuth)가 분산 계산을 위해 만든 알고리즘
// 컴퓨터 프로그래밍의 예술: 준수치적 알고리즘(개정 3판)
const stats = data.reduce((a, x) => {
  a.N++;
  let delta = x - a.mean;
  a.mean += delta / a.N;
  a.M2 += delta * (x - a.mean);
  return a;
}, { N: 0, mean: 0, M2: 0 });
if (stats.N > 2) {
  stats.variance = stats.M2 / (stats.N - 1);
  stats.stdev = Math.sqrt(stats.variance);
}

// reduce의 유연선을 알아보기 위한 추가 예제
const words2 = [
  'Beachball',
  'Rodeo',
  'Angel',
  'Aardvark',
  'Xylophone',
  'November',
  'Chocolate',
  'Papaya',
  'Uniform',
  'Joker',
  'Clover',
  'Bali',
];
const longWords = words2.reduce((a, w) => w.length > 6 ? a + ' ' + w : a, ' ').trim();
// longWords: "Beachball Aardvark Xylophone November Chocolate Uniform"

// 위 예제는 문자열 누적값을 사용해서 6글자가 넘는 단어를 모아 문자열 하나로 반환
// reduce 대신 filter와 join을 사용해서 같은 결과를 얻을 수 있다.
