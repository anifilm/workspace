function printPeopleInTheUs(people) {
  for (let i = 0; i < people.length; i++) {
    var thisPerson = people[i];
    if (thisPerson.address.country === 'US') {
      console.log(thisPerson);
    }
  }
}

printPeopleInTheUs([p1, p2, p3]);
