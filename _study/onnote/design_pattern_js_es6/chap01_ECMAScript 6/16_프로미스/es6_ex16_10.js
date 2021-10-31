// 16.10 프로미스와 비동기 함수 사용

function welcome(resolve, reject) {
  setTimeout(() => {
    console.log('Welcome');
    resolve();
  }, 3000);
}

function to(resolve, reject) {
  setTimeout(() => {
    console.log('to');
    resolve();
  }, 2000);
}

function world(resolve, reject) {
  setTimeout(() => {
    console.log('World');
    resolve('!');
  }, 1000);
}

function end(response) {
  console.log(response);
}

const promise = new Promise((resolve, reject) => {
  welcome(resolve, reject);
});

promise.then((response) => {
  return new Promise((resolve, reject) => {
    to(resolve, reject);
  })
}).then((response) => {
  return new Promise((resolve, reject) => {
    world(resolve, reject);
  });
}).then((response) => {
  end(response);
});

console.log('Executed!');
// Executed!
// Welcome
// to
// World
// !
