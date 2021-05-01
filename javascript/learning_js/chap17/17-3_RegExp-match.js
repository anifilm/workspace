// 17.3 정규식 검색

const input = 'As I was going to Saint Ives';
const re = /\w{3,}/ig; // 세 글자 이상 단어에 모두 일치, 대소문자는 가리지 않는다.

// 문자열(input)의 메서드를 사용할 때
input.match(re); // ["was", "going", "Saint", "Ives"]
input.search(re); // 5, 세 글자 이상으로 이루어진 첫 단어의 인덱스는 5

// 정규식(re)의 메서드를 사용할 때
re.test(input); // true, input에는 세 글자 이상으로 이루어딘 단어가 한 개 이상 있다.
re.exec(input); // ["was"], 처음 일치하는 것
re.exec(input); // ["going"], exec는 마지막 위치를 '기억'한다.
re.exec(input); // ["Saint"]
re.exec(input); // ["Ives"]
re.exec(input); // null, 더 이상 일치하는 것이 없다.

// 위 예제는 모두 정규식 리터럴을 그대로 사용해도 된다.
input.match(/\w{3,}/ig);
input.search(/\w{3,}/ig);
/\w{3,}/ig.test(input);
/\w{3,}/ig.exec(input);
// ...
