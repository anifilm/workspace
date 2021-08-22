// 8.11.1 화살표 함수 표현식으로 함수 정의하기

// 화살표 함수는 this의 값이 함수를 정의할 때 결정된다.
const obj = {
  say: function () {
    console.log(this); // [object Object] {say: f}
    const f = function () { console.log(this); }; // [object Window]
    f();
    const g = () => { console.log(this); }; // [object Object] {say: f}
    g();
  }
};

obj.say();


// 화살표 함수는 call이나 apply 메서드를 사용하여 this를 바꾸어 호출해도 this 값이 바뀌지 않는다.
const f = function () { console.log(this.name); };
const g = () => { console.log(this.name); };
const tom = { name: 'Tom' };

f.call(tom); // Tom
g.call(tom); // ''


// arguments 변수가 없다.
const f = () => { console.log(arguments); };
f(); // ReferenceError: arguments is not defined


// 생성자로 사용할 수 없다.
const Person = (name, age) => { this.name = name; this.age = age; };
const tom = new Person('Tom', 17); // TypeError: Person is not a constructor


// yield 키워드를 사용할 수 없다.
