'use strict';
const R = require('ramda');
const _ = require('lodash');

// 1장에서는 합성 개념을 공부하기 전, 준비 운동을 합니다.
// 합성 함수는 "run"이라는 별칭으로 나타냅니다.
const run = R.compose;
// 커리 함수의 별칭
const curry = R.curry;

// 본문 1장에서는 모의 저장 객체를 사용합니다.
const db = require('../helper').db;

// 코드 1-4 showStudent 프로그램을 분해
const find = curry((db, id) => {
  let obj = db.find(id);
  if (obj === null) {
    throw new Error('학생을 찾을 수 없습니다!');
  }
  return obj;
});

const csv = student => `${student.ssn}, ${student.firstname}, ${student.lastname}`;

const append = curry((source, info) => {
  source(info);
  return info;
})

const showStudent = run(
  append(console.log),
  csv,
  find(db)
);

showStudent('444-44-4444');
