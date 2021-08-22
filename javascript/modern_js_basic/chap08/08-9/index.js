// 8.9.2 간단한 예

var digits = '';
for (let i = 0; i < 10; i++) {
  digits += i;
}
console.log(digits); // 0123456789

var randomChars = '';
for (let i = 0; i < 8; i++) {
  randomChars += String.fromCharCode(Math.floor(Math.random() * 26) + 'a'.charCodeAt(0));
}
console.log(randomChars); // ngqkyvsu (무작위 알파벳 문자열)


// 고차 함수 joinStrings 정의
function joinStrings(n, f) {
  let s = '';
  for (let i = 0; i < n; i++) {
    s += f(i);
  }
  return s;
}

var digits = joinStrings(10, function (i) { return i; });
var randomChars = joinStrings(8, function (i) {
  return String.fromCharCode(Math.floor(Math.random() * 26) + 'a'.charCodeAt(0));
});
console.log(digits); // 0123456789
console.log(randomChars); // dsrsjzfv (무작위 알파벳 문자열)
