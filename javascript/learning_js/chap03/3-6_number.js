// 3.6 숫자

let count = 10;        // 정수 숫자 리터럴. count는 더블입니다.
const blue = 0x0000ff; // 16진수. 16진수 ff는 10진수 255와 같습니다.
const umask = 0o0022;  // 8진수. 8진수 22는 십진수 18과 같습니다.
const roomTemp = 21.5; // 십진수, 실수
const c = 3.0e6;       // 지수 (3.0 x 10^6 = 3,000,000)
const e = -1.6e-19     // 지수 (-1.6 x 10^-19 = 0.00000000000000000016)
const inf = Infinity;
const ninf = -Infinity;
const nan = NaN;       // "숫자가 아님"

console.log(count);
console.log(blue);
console.log(umask);
console.log(roomTemp);
console.log(c);
console.log(e);
console.log(inf);
console.log(ninf);
console.log(nan);
