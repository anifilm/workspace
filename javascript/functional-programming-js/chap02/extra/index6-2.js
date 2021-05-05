function printPeople(people, action) {
  for (let i = 0; i < people.length; i++) {
    action(people[i]);
  }
}

function action(person) {
  if (person.address.country === 'US') {
    console.log(person);
  }
}

printPeople(people, action);
