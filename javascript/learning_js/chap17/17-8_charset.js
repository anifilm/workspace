// 17.8 문자셋

const beer99 = '99 bottles of beer on the wall ' +
  'take 1 down and pass it around -- ' +
  '98 bottles of beer on the wall.';
const matches = beer99.match(/0|1|2|3|4|5|6|7|8|9/g);

const m1 = beer99.match(/[0123456789]/g); // 가능합니다.
const m2 = beer99.match(/[0-9]/g); // 더 좋군요.

// 문자열에서 글자와 숫자, 기타 구두점을 찾는다. (공백 빼고 다 찾음)
// 하이픈은 아스케이프를 사용하여 작성(\-)
const match1 = beer99.match(/[\-0-9a-z.]/ig);

// 문자셋을 제외할 때는 다음과 같이 캐럿(^)을 맨 앞에 사용
// 문자열에서 공백만 찾는다.
const match2 = beer99.match(/[^\-0-9a-z.]/);
