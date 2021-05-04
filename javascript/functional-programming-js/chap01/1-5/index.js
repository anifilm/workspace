'use strict';
const R = require('ramda');
const _ = require('lodash');

// 1장에서는 합성 개념을 공부하기 전, 준비 운동을 합니다.
// 합성 함수는 "run"이라는 별칭으로 나타냅니다.
const run = R.compose;
// 커리 함수의 별칭
const curry = R.curry;

// 코드 1-5 함수 체인으로 프로그래밍
// 세 학생의 수강 등록 데이터가 담긴 배열
const enrollment = [
  {
    enrolled: 2, // 2 강좌를 등록하고 평균 100점을 받은 학생
    grade: 100,
  },
  {
    enrolled: 2, // 2 강좌를 등록하고 평균 80점을 받은 학생
    grade: 80,
  },
  {
    enrolled: 1, // 1 강좌를 등록하고 평균 89점을 받은 학생
    grade: 89,
  },
];

const result = _.chain(enrollment)
  .filter((student) => student.enrolled > 1)
  .map(_.property('grade'))
  .mean()
  .value();

console.log(result);
