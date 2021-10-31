// 16.6 finally 함수 호출

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
}).finally(() => {
  console.log('finally!');
});

console.log('Executed!');
// Executed!
// Hello
// World
// finally!
