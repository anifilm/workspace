// 코드 2-1 Person/Student 클래스 정의

class Person {
  constructor(firstname, lastname, ssn) {
    this._firstname = firstname;
    this._lastname = lastname;
    this._ssn = ssn;
    this._address = null;
    this._birthYear = null;
  }

  get ssn() {
    return this._ssn;
  }

  get firstname() {
    return this._firstname;
  }

  get lastname() {
    return this._lastname;
  }

  get address() {
    return this._address;
  }

  get birthYear() {
    return this._birthYear;
  }

  set birthYear(year) {
    this._birthYear = year;
  }

  set address(addr) {
    this._address = addr;
  }

  toString() {
    return `Person(${this._firstname}, ${this._lastname})`;
  }
}

class Student extends Person {
  constructor(ssn, firstname, lastname, school, birthYear = null, address = null) {
    super(ssn, firstname, lastname, birthYear, address);
    this._school = school;
  }

  get school() {
    return this._school;
  }
};
