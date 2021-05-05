'use strict';
const R = require('ramda');
const { Person } = require('../model/Person');

var person = new Person('Alonzo', 'Church', '444-44-4444');
var lastnameLens = R.lensProp('_lastname');

R.view(lastnameLens, person); // -> 'Church'

var newPerson = R.set(lastnameLens, 'Mourning', person);
newPerson._lastname; // -> 'Morning'
console.log(newPerson._lastname);
