'use strict';
const R = require('ramda');
const _ = require('lodash');

// 1장에서는 합성 개념을 공부하기 전, 준비 운동을 합니다.
// 합성 함수는 "run"이라는 별칭으로 나타냅니다.
const run = R.compose;

// 책 본문에서는 DOM에 출력하지만, 여기서는 노드 콘솔에 출력합니다.
const printToConsole = (str) => {
  console.log(str);
  return str;
};
const toUpperCase = (str) => str.toUpperCase();
const echo = R.identity;

// 코드 1-1 함수형 printMessage
const printMessage = run(printToConsole, toUpperCase, echo);

printMessage('Hello World');
