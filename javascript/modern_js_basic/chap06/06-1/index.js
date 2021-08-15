// 6.1.1 대화상자

window.alert();   // 경고
window.prompt();  // 사용자 문자열 입력
window.confirm(); // 확인/취소 입력
/* window. 생략 가능 */


// 6.1.2 alert(경고 대화상자)

alert('안녕하세요!');


// 6.1.3 prompt(입력 대화상자)

var name = prompt('이름을 입력하세요.');
var name = prompt('이름을 입력하세요.', '사용자 이름');

var age = parseInt(prompt('나이를 입력하세요.'));
var height = parseFloat(prompt('키를 입력하세요.');


// 6.1.4 confirm(확인 대화상자)

var ret = confirm('링크를 표시하시겠습니까?');
