// 예제 10-23
// ES5
var obj = {
  name: 'Lee',
  sayHi: function () {
    console.log('Hi!' + this.name);
  }
};

obj.sayHi(); // "Hi! Lee"


// 예제 10-24
// ES6에서는 메서드를 정의할 때 function 키워드를 생략한 축약 표현을 사용할 수 있다.
var obj = {
  name: 'Lee',
  // 메서드 축약 표현
  sayHi() {
    console.log('Hi!' + this.name);
  }
};

obj.sayHi(); // "Hi! Lee"
