// object 타입
// 타입스트립트의 타입 계층도에서 object 타입은 인터페이스와 클래스의 상위 타입
// object 타입으로 선언된 변수는 number, boolean, string 타입의 값을 가질 수는 없지만,
// 다음처럼 속성 이름이 다른 객체를 모두 자유롭게 담을 수 있다.
let o: object = { name: 'Jack', age: 32 };
o = { first: 1, second: 2 };
