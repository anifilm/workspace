'use strict';
const { Person } = require('../model/Person');
const { Address } = require('../model/Address');
const { zipCode } = require('../model/zipCode');

var person = new Person('Haskell', 'Curry', '444-44-4444');
person.address = new Address(
  'US',
  'NJ',
  'Princeton',
  zipCode('08544', '1234'),
  'Alexander St.',
);

person = Object.freeze(person);

person.address._country = 'France'; //-> 허용!
person.address.country; //-> 'France'
