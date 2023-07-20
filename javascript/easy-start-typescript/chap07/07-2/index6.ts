type Person = {
  name: string;
  age: number;
};

type Developer = {
  skill: string;
};

type Joo = Person & Developer;

const joo: Joo = {
  name: '형주',
  age: 21,
  skill: '웹개발',
};
