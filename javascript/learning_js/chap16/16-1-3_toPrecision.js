// 16.1.3 고정 전체 자리수

/*
소수점이 어디 나타나든 관계없이 숫자 몇 개로 표현하느냐가 중요하다면 toPrecision()을 사용합니다.
*/

let x = 1000;
x.toPrecision(5); // "1000.0"
x.toPrecision(4); // "1000"
x.toPrecision(3); // "1.00e+3"
x.toPrecision(2); // "1.0e+3"
x.toPrecision(1); // "1e+3"

x = 15.335;
x.toPrecision(6); // "15.3350"
x.toPrecision(5); // "15.335"
x.toPrecision(4); // "15.34"
x.toPrecision(3); // "15.3"
x.toPrecision(2); // "15"
x.toPrecision(1); // "2e+1"

/*
출력 결과는 반올림된 숫자이며 전체 자릿수는 매개변수로 넘긴 자릿수와 일치합니다. 필요할 경우 지수 표기법을 사용합니다.
*/
