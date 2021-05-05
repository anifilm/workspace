'use strict';
//const { Person } = require('../model/Person');
//const { Student } = require('../model/Student');
//const { Address } = require('../model/Address');

var selector = (country, school) =>
  (student) =>
    student.address.country === country &&
    student.school === school;

var findStudentsBy = (friends, selector) =>
  friends.filter(selector);

findStudentsBy([curry, turing, church, kleene],
  selector('US', 'Princeton')
); // -> [church, kleene]
