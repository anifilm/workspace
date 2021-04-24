const small = Number.EPSILON;           // 1에 더했을 때 1과 구분되는 결과를 만들 수 있는
                                        // 가장 작은 값입니다. 근사치는 2.2e-16입니다.
const bigInt = Number.MAX_SAFE_INTEGER; // 표현할 수 있는 가장 큰 정수
const max = Number.MAX_VALUE;           // 표현할 수 있는 가장 큰 숫자
const minInt = Number.MIN_SAFE_INTEGER; // 표현할 수 있는 가장 작은 정수
const min = Number.MIN_VALUE;           // 표현할 수 있는 가장 작은 숫자
const inf = Number.POSITIVE_INFINITY;   // Infinity
const nInf = Number.NEGATIVE_INFINITY;  // -Infinity
const nan = Number.NaN;                 // NaN

console.log(small);
console.log(bigInt);
console.log(max);
console.log(minInt);
console.log(min);
console.log(inf);
console.log(nInf);
console.log(nan);
