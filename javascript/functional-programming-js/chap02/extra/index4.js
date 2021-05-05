'use strict';
const R = require('ramda');
const { Person } = require('../model/Person');
const { Address } = require('../model/Address');
const { zipCode } = require('../model/zipCode');

var person = new Person('Alonzo', 'Church', '444-44-4444');
var lastnameLens = R.lensProp('lastname');

R.view(lastnameLens, person); //-> 'Church'

var newPerson = R.set(lastnameLens, 'Mourning', person);
newPerson._lastname; //-> 'Morning'
person.lastname; //-> 'Church'

console.log(newPerson.lastname);
console.log(person.lastname);

person.address = new Address(
  'US',
  'NJ',
  'Princeton',
  zipCode('08544', '1234'),
  'Alexander St.',
);

const zipPath = ['address', 'zip'];
const zipLens = R.lens(R.path(zipPath), R.assoc(zipPath));
R.view(zipLens, person); //-> zipCode('08544', '1234')

var newPerson = R.set(zipLens, zipCode('90210', '5678'), person);
var newZip = R.view(zipLens, newPerson); //-> zipCode('90210', '5678')
var originalZip = R.view(zipLens, person); //-> zipCode('08544', '1234')
newZip.toString() !== originalZip.toString(); //-> true
