// 8.11 모든 데이터 열거

let map = new Map([['Apple', 'red'], ['Melon', 'green']]);

for (let entry of map.entries()) {
  console.log(entry);
}
// ['Apple', 'red']
// ['Melon', 'green']
