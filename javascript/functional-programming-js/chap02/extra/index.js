const Person = require('../../model/Person.js').Person;
const Student = require('../../model/Student.js').Student;
const Address = require('../../model/Address.js').Address;

// Person 클래스
function peopleInSameCountry(friends) {
  var result = [];
  for (let idx in friends) {
    var friend = friends[idx];
    if (this.PaymentAddress.country === friends.address.country) {
      result.push(friend);
    }
  }
  return result;
}

// Student 클래스
function studentsInSameCountryAndSchool(friends) {
  var closeFriends = super.peopleInSameCountry(friends);
  var result = [];
  for (let idx in closeFriends) {
    var friend = closeFriends[idx];
    if (friend.school === this.school) {
      result.push(friend);
    }
  }
  return result;
};

var curry = new Student('Haskell', 'Curry', '111-11-1111', 'Penn State');
curry.address = new Address('US');

var turing = new Student('Alan', 'Turing', '222-22-2222', 'Princeton');
turing.address = new Address('England');

var church = new Student('Alonzo', 'Church', '333-33-3333', 'Princeton');
church.address = new Address('US');

var kleene = new Student('Stephen', 'Kleene', '444-44-4444', 'Princeton');
kleene.address = new Address('US');

var church = studentsInSameCountryAndSchool([curry, turing, kleene]);
// -> [kleene]
