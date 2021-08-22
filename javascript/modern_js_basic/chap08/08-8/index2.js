// 8.3.4 bind 메서드

function say(greetings, honorifics) {
  console.log(greetings + ' ' + honorifics + this.name);
}

const tom = { name: 'Tom Sawyer' };
const sayToTom = say.bind(tom);
sayToTom('Hello!', 'Mr.'); // Hello! Mr.Tom Sawyer
