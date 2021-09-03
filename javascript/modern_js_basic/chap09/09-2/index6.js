// 9.2.8 Object.create로 객체 생성하기

var person1 = {
  name: 'Tom',
  sayHello: function () {
    console.log('Hello! ' + this.name);
  }
};

var person2 = Object.create(person1);
person2.name = 'Huck';
person2.sayHello(); // Hello! Huck
