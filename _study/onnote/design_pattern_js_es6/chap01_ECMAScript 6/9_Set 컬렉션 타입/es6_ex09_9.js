// 9.9 모든 데이터 열거

const set = new Set(['Apple', 'Melon']);

for (let entry of set.entries()) {
  console.log(entry);
}
// ['Apple', 'Apple']
// ['Melon', 'Melon']
