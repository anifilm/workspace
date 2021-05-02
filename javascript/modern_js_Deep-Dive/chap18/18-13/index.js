// 18.2.6 prototype 프로퍼티

// prototype 프로퍼티는 생성자 함수로 호출할 수 있는 함수 객체, 즉 constructor만이 소유하는 프로퍼티다.

// 예제 18-13
// 함수 객체는 prototype 프로퍼티를 소유한다.
(function () { }).hasOwnProperty('prototype'); // -> true

// 일반 객체는 protortpe 프로퍼티를 소유하지 않는다.
({}).hasOwnProperty('prototype'); // -> false

// prototype 프로퍼티는 함수가 객체를 생성하는 생성자 함수로 호출될 때 생성자 함수가 생성할 인스턴스의 프로토타입 객체를 가리킨다.
