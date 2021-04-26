// 예제 11-16
var person = {
  name: 'Lee'
};

// 객체를 참조로 복사(얕은 복사, 두 변수는 같은 객체의 메모리 주소를 가리킨다.)
var copy = person;


// 예제 11-17
var person = {
  name: 'Lee'
};

// 객체를 참조로 복사(얕은 복사). copy와 person은 동일한 참조 값을 갖는다.
var copy = person;

// copy와 person은 동일한 객체를 참조한다.
console.log(copy === person); // true

// copy를 통해 객체를 변경한다.
copy.name = 'Kim';

// person을 통해 객체를 변경한다.
person.address = 'Seoul';

// copy와 person은 동일한 객체를 가리킨다.
// 따라서 어느 한쪽에서 객체를 변경하면 서로 영향을 주고받는다.
console.log(person); // { name: "Kim", address: "Seoul" }
console.log(copy);   // { name: "Kim", address: "Seoul" }
