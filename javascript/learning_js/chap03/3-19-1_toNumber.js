// 3.19.1 숫자로 바꾸기

const numStr = '33.3';
const num = Number(numStr); // 이 행은 숫자 값을 만듭니다.
                            // Number 객체의 인스턴스가 아닙니다.

const a = parseInt('16 volts', 10); // " volts"는 무시됩니다. 10진수 16
const b = parseInt('3a', 16); // 16진수 3a를 10진수로 변환. 결과는 58
const c = parseFloat('15.5 kph'); // " kph"는 무시됩니다.
                                  // parseFloat는 항상 기수가 10이라고 가정

// Date 객체를 숫자로 바꿀 때는 valueOf() 메서드를 사용
const d = new Date(); // 현재 날짜
const ts = d.valueOf(); // UTC 1970년 1월 1일 자정으로부터 몇 밀리초가 지났는지 나타내는 숫자

// 불리언 값을 1이나 0으로 변경해야 할 때
const b = true;
const n = b ? 1 : 0;
