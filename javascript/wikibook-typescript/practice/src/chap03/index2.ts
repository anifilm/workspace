const obj = {
  "foo": 123,
  "foo bar": -500,
  '↑↓↑↓': "",
};

console.log(obj.foo);
console.log(obj["foo bar"]);

const obj2 = {
  1: "one",
  2.05: "two point o five",
};

console.log(obj2["1"]);
console.log(obj2["2.05"]);

const propName = "foo";
const obj3 = {
  [propName]: 123,
};

console.log(obj3.foo);
