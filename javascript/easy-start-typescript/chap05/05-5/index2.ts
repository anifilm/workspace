interface Person {
  name: string;
  age: number;
}

interface Developer extends Person {
  skill: string;
}

const ironman: Developer = {
  name: '아이언맨',
  age: 21,
  skill: '만들기',
};
