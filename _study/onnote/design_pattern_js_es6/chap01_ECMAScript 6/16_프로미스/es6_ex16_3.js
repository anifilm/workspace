// 16.3 프로미스 사용

const promise = new Promise((resolve, reject) => {
  setTimeout(() => {
    console.log('Hello');
    resolve();
  }, 2000);
});

promise.then(() => {
  console.log('World');
});

console.log('Executed!');
// Executed!
// Hello
// World
