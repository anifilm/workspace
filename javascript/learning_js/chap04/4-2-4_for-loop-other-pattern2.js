// 4.2.4 for 루프의 다른 패턴

let s = '3'; // 숫자가 들어있는 문자열
for ( ; s.length < 10; s = ' ' + s); // 문자열의 길이를 조건으로 썼습니다.
                                     // 여기서 사용한 for 루프 마직막에 세미콜론이 없으면
                                     // 에러가 일어납니다.

for (let x = 0.2; x < 3.0; x += 0.2) // 제어 변수가 정수가 아니어도 괜찮습니다.
  console.log(x);

for ( ; !player.isBroke;) // 조건에 객체 프로퍼티를 썼습니다.
  console.log('Still playing!');
