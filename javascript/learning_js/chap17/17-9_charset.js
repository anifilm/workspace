// 17.9 자주 쓰는 문자셋

/*
매우 자주 쓰이는 일부 문자셋은 단축 표기가 따로 있다. 이들을 클래스라고 부르기도 한다.

문자셋    동등한 표현      노트
\d       [0-9]
\D       [^0-9]
\s       [\t\v\n\r]     탭, 스페이스, 세로 탭, 줄바꿈이 포함된다.
\S       [^\t\v\n\r]
\w       [a-zA-Z_]      하이픈과 마침표는 포함되지 않으므로 이 문자셋으로 도메일 이름이나 CSS 클래스 등을 찾을 수는 없다.
\W       [^a-zA-Z_]

*/

const stuff =
  'height:    9\n' +
  'medium:    5\n' +
  'low:       2\n';
const levels = stuff.match(/:\s*[0-9]/g); // 공백을 포함한 숫자를 추출

const messyPhone = '(505) 555-1515';
const neatPhone = messyPhone.replace(/\D/g, ''); // 숫자만 추출

const field = '   something   ';
const valid = /\S/.test(field); // 공백이 포함되어 있는지 검사
