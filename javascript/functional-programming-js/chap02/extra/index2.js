const Person = require('../../model/Person.js').Person;
const Student = require('../../model/Student.js').Student;
const Address = require('../../model/Address.js').Address;

var selector = (country, school) =>
  (student) =>
    student.address.country === country &&
    student.school === school;

var findStudentsBy = (friends, selector) =>
  friends.filter(selector);

findStudentsBy([curry, turing, church, kleene],
  selector('US', 'Princeton')
); // -> [church, kleene]
