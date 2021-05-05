'use strict';
const R = require('ramda');
const _ = require('lodash');

// 본문 1장에서는 모의 저장 객체를 사용합니다.
const { db } = require('../helper');

// 코드 1-3 부수효과를 일으키는 명령형 showStudent 함수
function showStudent(ssn) {
  let student = db.find(ssn);
  if (student !== null) {
    let studentInfo = `${student.ssn}, ${student.firstname}, ${student.lastname}`;
    console.log(studentInfo);
    return studentInfo;
  } else {
    throw new Error('학생을 찾을 수 없습니다!');
  }
}

showStudent('444-44-4444');
