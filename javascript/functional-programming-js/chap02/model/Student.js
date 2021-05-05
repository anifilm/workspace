// 코드 2-1 Person/Student 클래스 정의

const { Person } = require('./Person');

exports.Student = class Student extends Person {
  constructor(ssn, firstname, lastname, school, birthYear = null, address = null) {
    super(ssn, firstname, lastname, birthYear, address);
    this._school = school;
  }

  get school() {
    return this._school;
  }
};
