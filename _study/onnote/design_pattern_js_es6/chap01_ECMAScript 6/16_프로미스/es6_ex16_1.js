// 16.1 비동기 함수

function hello() {
  setTimeout(() => {
    console.log('Hello');
  }, 2000);
}

function world() {
  setTimeout(() => {
    console.log('World');
  }, 1000);
}

hello();
world();

console.log('Executed!');
// Executed!
// World
// Hello
