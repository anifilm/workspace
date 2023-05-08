const obj = {
  foo: 123,
  bar: "Hello, world!",
};

console.log(obj.foo);
console.log(obj.bar);

const obj2 = {
  foo: 555,
  bar: "문자열",
};

const input = undefined;
const user = {
  name: input ? input : "이름 없음",
  age: 20,
};

const name2 = input ? input : "이름 없음";
const user2 = {
  //name2: name2,
  name2, // 생략 표현 가능
  age: 20,
};
