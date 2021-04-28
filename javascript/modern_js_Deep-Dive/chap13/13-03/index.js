var x = 'global';

function foo() {
  var x = 'local';
  console.log(x); // "local"
}

foo();

console.log(x); // "global"
