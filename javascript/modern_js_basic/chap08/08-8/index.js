// 8.3.3 apply와 call 메서드

function say(greetings, honorifics) {
  console.log(greetings + ' ' + honorifics + this.name);
}

const tom = { name: 'Tom Sawyer' };
const becky = { name: 'Becky Thatcher' };

say.apply(tom, ['Hello!', 'Mr.']); // Hello! Mr.Tom Sawyer
say.apply(becky, ['Hi!', 'Ms.']);  // Hi! Ms.Becky Thatcher
say.call(tom, 'Hello!', 'Mr.');    // Hello! Mr.Tom Sawyer
say.call(becky, 'Hi!', 'Ms.');     // Hi! Ms.Becky Thatcher
