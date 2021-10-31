// 16.5 reject 함수 호출

const promise = new Promise((resolve, reject) => {
  setTimeout(() => {
    console.log('Hello');
    reject('World');
  }, 1000);
});

promise.then((response) => {
  console.log('Success!');
}).catch((error) => {
  console.log(error);
});

console.log('Executed!');
// Executed!
// Hello
// World
