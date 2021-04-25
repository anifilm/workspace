// 10.1 맵

// 사용자 객체
const u1 = { name: 'Cynthia' };
const u2 = { name: 'Jackson' };
const u3 = { name: 'Olive' };
const u4 = { name: 'James' };

// 맵 생성
const userRoles = new Map();

// 맵의 set() 메서드를 사용해서 사용자 역할을 할당
userRoles.set(u1, 'User');
userRoles.set(u2, 'User');
userRoles.set(u3, 'Admin');
// 제임스는 역할이 없다.

// set() 메서드는 체인으로 연결할 수 있다.
userRoles
  .set(u1, 'User')
  .set(u2, 'User')
  .set(u3, 'Admin');

// 생성자에 배열의 배열을 넘기는 형태로 사용
const userRoles = new Map([
  [u1, 'User'],
  [u2, 'User'],
  [u3, 'Admin'],
]);

// u2의 역할을 알아볼 때는 get() 메서드를 사용
userRoles.get(u2); // "User"

// 맵에 존재하지 않는 키에 get 호출시 undefined를 반환
// 맵에 키가 존재하는지 확인 시에는 has() 메서드를 사용
userRoles.has(u1); // true
userRoles.get(u1); // "User"
userRoles.has(u4); // false
userRoles.get(u4); // undefined

// 맵에 이미 존재하는 키에 set() 메서드를 사용하면 값이 교체된다.
userRoles.get(u1); // "User"
userRoles.set(u1, 'Admin');
userRoles.get(u1); // "Admin"

// size 프로퍼티를 사용하여 맵의 요소 숫자를 반환
userRoles.size; // 3

/*
key() 메서드는 맵의 키를,
value() 메서드는 값을,
entries() 메서드는 첫 번째 요소가 키이고 두 번째 요소가 값인 배열을 각각 반환
이들 메서드가 반환하는 것은 모두 이터러블 객체이다. (for...of 루프 사용 가능)
*/

for (let u of userRoles.keys()) {
  console.log(u.name);
}

for (let r of userRoles.values()) {
  console.log(r);
}

for (let ur of userRoles.entries()) {
  console.log(`${ur[0].name}: ${ur[1]}`);
}

// 맵도 할당(destruct) 할 수 있다.
for (let [u, r] of userRoles.entries()) {
  console.log(`${u.name}: ${r}`);
}

// entries() 메서드는 맵의 기본 이터레이터이므로
// 다음과 같이 단축해서 사용할 수 있다.
for (let [u, r] of userRoles) {
  console.log(`${u.name}: ${r}`);
}

// 전개 연산자(spread operator)를 사용하여 이터러블 객체를 배열로 변환할 수 있다.
[...userRoles.values()]; // ["User", "User", "Admin"]

// 맵의 요소를 삭제할 때는 delete() 메서드를 사용
userRoles.delete(u2);
userRoles.size; // 2

// 맵의 요소를 모두 지울 때는 clear() 메서드를 사용
userRoles.clear;
userRoles.size; // 0
