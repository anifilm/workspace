// 5.7.1 숫자를 문자열로 변환하기

// 숫자 + 문자열
10 + 'cookies' // 10cookies
100 + ''       // 100 (숫자에 빈 문자열을 더해 숫자 타입을 문자열로 변경할 수 있음)
('0000' + 12).slice(-4) // 0012

// Number 객체의 메서드를 활용하는 방법
var n = 26;
n.toString() // 26 (인수를 지정하지 않으면 10진수 문자열로 변환)
n.toString(2) // 11010 (2진수 문자열로 변환)
n.toString(16) // 1a (16진수 문자열로 변환)
(26).toString(16) // 1a (숫자에서 바로 메서드를 사용하고자 할 때는 소괄호로 묶는다.)

var x = 1234.567;
x.toString() // 1234.567
x.toString(16) // 4d2.9126e978d5
x.toFixed(0) // 1235
x.toFixed(2) // 1234.57
x.toFixed(4) // 1234.5670
x.toExponential(3) // 1.235e+3
x.toPrecision(3) // 1.23e+3
x.toPrecision(6) // 1234.57

// String 함수를 활용하는 방법
String(26) // 26
String(1234.567) // 1234.567
String(0x1a) // 26

/* String 함수는 모든 데이터 타입을 문자열 타입으로 변경한다. */
String('ABC')     // ABC
String(true)      // true
String(false)     // false
String(NaN)       // NaN
String(null)      // null
String(undefined) // undefined
String({ x: 1, y: 2 }) // [object Object]
String([1, 2, 3]) // 1,2,3


// 5.7.2 문자열을 숫자로 변환하기

// 수식 안에서 묵시적으로 변환하는 방법
var s = '2';
s - 0 // 2
+s // 2

// parseInt와 parseFloat 함수를 사용하는 방법
parseInt('3.14')   // 3
parseFloat('3.14') // 3.14
parseInt('3.14 meters')   // 3 (숫자 다음에 포함된 문자열과 숫자는 무시)
parseFloat('3.14 meters') // 3.14 (숫자에 다음에 포함된 문자열과 숫자는 무시)
parseInt('0xFF')   // 255 (문자열 앞부분에 '0x'가 있으므로 16진수로 해석)
parseInt('0.5')    // 0
parseInt('.5')     // NaN (문자열 앞에 '.'이 있으므로 해석되지 않음)
parseInt('abc')    // NaN (숫자로 해석할 수 없음)'
parseFloat('\100') // NaN (문자열 앞에 '\'가 있으므로 해석하지 않음)

// Number 함수를 활용하는 방법
Number('2.71828') // 2.71828

/* Number 함수는 모든 데이터 타입을 숫자 타입으로 변경한다. */
Number(123)       // 123
Number(true)      // 1
Number(false)     // 0
Number(NaN)       // NaN
Number(undefined) // NaN
Number(null)      // 0
Number({ x: 1, y: 2 }) // NaN
Number([1, 2, 3]) // NaN


// 5.7.3 논리값으로 변환하기

!!x
Boolean(x)
