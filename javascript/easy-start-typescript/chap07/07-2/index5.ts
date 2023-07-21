type Person = {
  name: string;
  age: number;
};

type Developer = {
  skill: string;
};

const joo: Person & Developer = {
  name: '형주',
  age: 21,
  skill: '웹개발',
};
