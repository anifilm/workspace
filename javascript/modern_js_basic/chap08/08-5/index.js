// 8.5.10 this 값

const tom = {
  name: 'Tom',
  sayHello: function () {
    console.log('Hello! ' + this.name);
  }
};

tom.sayHello(); // Hello! Tom

const huck = {
  name: 'Huck'
};
huck.sayHello = tom.sayHello;

huck.sayHello(); // Hello! Huck
