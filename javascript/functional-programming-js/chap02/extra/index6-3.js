function printPeople(people, selector, printer) {
  people.forEach(function (person) {
    if (selector(person)) {
      printer(person);
    }
  });
}

const inUs = person => person.address.country === 'US';

printPeople(people, inUs, console.log);
