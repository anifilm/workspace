/*
Q13
random 모듈을 사용하여 로또 번호(1~45 사이의 숫자 6개)를 생성해 보자. (단 중복된 숫자가 있으면 안 됨)
*/

function sleep(ms) {
  const wakeupTime = Date.now() + ms;
  while(Date.now() < wakeupTime) {}
}

function shuffle(arr) {
  for (let index = arr.length-1; index > 0; index--) {
    // 무작위 index 값을 만든다. (0 이상의 배열 길이 값)
    const randomPosition = Math.floor(Math.random() * (index+1));
    // 임시로 원본 값을 저장하고, randomPosition을 사용해 배열 요소를 섞는다.
    const temporary = arr[index];
    arr[index] = arr[randomPosition];
    arr[randomPosition] = temporary;
  }
}

function getLottoNumber(total=45, get=6) {
  const allNumber = [];
  const myNumber = [];
  // 1부터 total까지의 숫자를 배열에 넣기
  for (let i = 1; i <= total; i++) {
    allNumber.push(i);
  }
  // get개의 번호를 추출
  for (let i = 0; i < get; i++) {
    // allNumber 섞기
    const breakNumber = Math.floor(Math.random() * allNumber.length);
    do {
      //console.log('shuffle!');
      shuffle(allNumber);
      //console.log(allNumber);
      //sleep(100);
    } while (Math.floor(Math.random() * allNumber.length) !== breakNumber);
    //sleep(500);
    // 배열의 첫번째 요소를 추출
    const getNumber = allNumber.splice(breakNumber, 1)[0];
    //console.log('\ngetBall:', getNumber, '\n');
    //sleep(500);
    myNumber.push(getNumber);
  }
  return myNumber;
}

const result = [];
for (let i = 0; i < 5; i++) {
  result.push(getLottoNumber());
}
console.log('이번주 로또 추천번호');
for (let i = 0; i < 5; i++) {
  console.log(result[i]);
  //console.log(result[i].sort((a, b) => a - b));
}
