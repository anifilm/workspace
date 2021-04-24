// 8.3 배열 검색

/*
조건에 맞는 요소의 인덱스가 아닌 요소 자체를 원할 때 find 메서드를 사용
검색 조건을 함수로 전달할 수 있으며 조건에 맞는 요소가 없을 때는 undefined를 반환
*/

const arr = [{ id: 5, name: 'Judith' }, { id: 7, name: 'Francis' }];
arr.find(o => o.id === 5); // 객체 { id: 5, name: "Judith" }
arr.find(o => o.id === 2); // undefined

// 특정 인덱스보다 뒤에 있는 제곱수를 찾는 예제
const arr2 = [1, 17, 16, 5, 4, 16, 10, 3, 49];
arr2.find((x, i) => i > 2 && Number.isInteger(Math.sqrt(x))); // 4

// ID를 조건으로 Person 객체를 검색하는 예제
class Person {
  constructor(name) {
    this.name = name;
    this.id = Person.nextId++;
  }
}
Person.nextId = 0;
const jamie = new Person('Jamie'),
  juliet = new Person('Juliet'),
  peter = new Person('Peter'),
  jay = new Person('Jay');
const arr3 = [jamie, juliet, peter, jay];

// 옵션 1: ID를 직접 비교하는 방법
arr3.find(p => p.id === juliet.id); // juliet 객체

// 옵션 2: 'this' 매개변수를 이용하는 방법
arr3.find(function (p) {
  return p.id === this.id
}, juliet); // juliet 객체
