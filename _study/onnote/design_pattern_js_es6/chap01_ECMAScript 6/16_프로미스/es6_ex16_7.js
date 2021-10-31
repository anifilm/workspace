// 16.7 비동기 함수

function welcome() {
  setTimeout(() => {
    console.log('Welcome');
  }, 3000);
}

function to() {
  setTimeout(() => {
    console.log('to');
  }, 2000);
}

function world() {
  setTimeout(() => {
    console.log('World');
    end('!');
  }, 1000);
}

function end(response) {
  console.log(response);
}

welcome();
to();
world();

console.log('Executed!');
// Executed!
// World
// !
// to
// Welcome
