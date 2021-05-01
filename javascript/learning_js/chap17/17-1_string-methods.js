// 17. 부분 문자열 검색과 대체

const input = 'As I was going to Saint Ives';
input.startsWith('As'); // true
input.endsWith('Ives'); // true
input.startsWith('going', 9); // true, 인덱스 9에서 시작
input.endsWith('going', 14); // true, 인덱스 14를 문자열의 끝으로 간주
input.includes('going'); // true
input.includes('going', 10); // false, 인덱스 10이후에는 "going"이 없다.
input.indexOf('going'); // 9
input.indexOf('going', 10); // -1
input.indexOf('npoe'); // -1

// 대소문자를 구분하지 않고 비교하려면 소문자로 바꿔서 비교
input.startsWith('as'); // false
input.toLowerCase().startsWith('as'); // true

// 부분 문자열을 찾아 교체
const output = input.replace('going', 'walking');
