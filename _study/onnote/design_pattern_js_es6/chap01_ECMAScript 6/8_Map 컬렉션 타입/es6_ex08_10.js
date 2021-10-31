// 8.10 모든 값 열거

const map = new Map([['Apple', 'red'], ['Melon', 'green']]);

for (let value of map.values()) {
  console.log(value);
}
// red
// green
