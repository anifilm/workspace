// 16.4 resolve 함수 호출

const promise = new Promise((resolve, reject) => {
  setTimeout(() => {
    console.log('Hello');
    resolve('World');
  }, 1000);
});

promise.then((response) => {
  console.log(response);
});

console.log('Executed!');
// Executed!
// Hello
// World
