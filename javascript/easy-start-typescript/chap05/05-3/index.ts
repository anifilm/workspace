interface Person {
  name: string;
  age: number;
}

function logAge(someone: Person) {
  console.log(someone.age);
}

const captain = { name: 'Capt', age: 100 };
logAge(captain); // 100

function getPerson(someone: Person): Person {
  return someone;
}
