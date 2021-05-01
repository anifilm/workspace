// 17.4 정규식을 사용한 문자열 교체

const input = 'As I was going to Saint Ives';

// 네 글자 이상으로 이루어진 단어를 모두 교체
const output = input.replace(/\w{4,}/ig, '****');
console.log(output); // "As i was **** to **** ****"
