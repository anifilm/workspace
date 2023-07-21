interface Person {
  name: string;
  age: number;
}

interface Developer extends Person {
  skill: string;
}

const joo: Developer = {
  name: '형주',
  age: 21,
  skill: '웹개발',
};
