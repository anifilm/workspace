// 16.2 콜백 지옥

function helloWorld() {
  setTimeout(() => {
    console.log('Hello');

    setTimeout(() => {
      console.log('World');
    }, 1000);
  }, 2000);
}

helloWorld();

console.log('Executed!');
// Executed!
// Hello
// World
