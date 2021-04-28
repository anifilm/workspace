// 16.1.2 지수 표기법

/*
지수 표기법이 필요할 때는 toExponential()을 사용합니다.
*/

const x = 3800.5;
x.toExponential(4); // "3.8005e+3"
x.toExponential(3); // "3.801e+3"
x.toExponential(2); // "3.80e+3"
x.toExponential(1); // "3.8e+3"
x.toExponential(0); // "4e+3"

/*
toFixed()와 마찬가지로 반올림한 결과가 출력됩니다. 매개변수로 넘긴 정밀도에 따라 소수점 뒤에 숫자가 몇개 나타날지 정해집니다.
*/
