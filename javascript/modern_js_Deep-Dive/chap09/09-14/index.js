// 예제 09-14

// 1. String 생성자 함수를 new 연산자 없이 호출하는 방법
// 숫자 타입 => 문자열 타입
String(1);   // => "1"
String(NaN); // => "Nan"
String(Infinity); // => "Infinity"
// 불리언 타입 => 문자열 타입
String(true);  // => "true"
String(false); // => "false"

// 2. Object.prototype.toString 메서드를 사용하는 방법
// 숫자 타입 => 문자열 타입
(1).toString();   // => "1"
(NaN).toString(); // => "NaN"
(Infinity).toString(); // => "Infinity"
// 불리언 타입 => 문자열 타입
(true).toString();  // => "true"
(false).toString(); // => "false"

// 3. 문자열 연결 연산자를 이용하는 방법
// 숫자 타입 => 문자열 타입
1 + '';   // => "1"
NaN + ''; // => "NaN"
Infinity + ''; // => "Infinity"
// 불리언 타입 => 문자열 타입
true + '';  // => "true"
false + ''; // => "false"


// 예제 09-15

// 1. Number 생성자 함수를 new 연산자 없이 호출하는 방법
// 문자열 타입 => 숫자 타입
Number('0');  // => 0
Number('-1'); // => -1
Number('10.53'); // => 10.53
// 불리언 타입 => 숫자 타입
Number(true);  // => 1
Number(false); // => 0

// 2. parseInt, parseFloat 함수를 사용하는 방법(문자열만 변환 가능)
// 문자열 타입 => 숫자 타입
parseInt('0');  // => 0
parseInt('-1'); // => -1
parseFloat('10.53'); // => 10.53

// 3. + 단항 산술 연산자를 이용하는 방법
// 문자열 타입 => 숫자 타입
+'0';  // => 0
+'-1'; // => -1
+'10.53'; // => 10.53
// 불리언 타입 => 숫자 타입
+true;  // => 1
+false; // => 0

// 4. * 산술 연산자를 이용하는 방법
// 문자열 타입 => 숫자 타입
'0' * 1;  // 0
'-1' * 1; // => -1
'10.53' * 1; // => 10.53
// 불리언 타입 => 숫자 타입
true * 1;  // => 1
false * 1; // => 0
