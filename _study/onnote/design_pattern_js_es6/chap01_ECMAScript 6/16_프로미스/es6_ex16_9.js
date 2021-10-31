// 16.9 프로미스 사용

const promise = new Promise((resolve, reject) => {
  setTimeout(() => {
    console.log('Welcome');
    resolve();
  }, 3000);
})

promise.then((response) => {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log('to');
      resolve();
    }, 2000);
  });
}).then((response) => {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log('World');
      resolve('!');
    }, 1000);
  });
}).then((response) => {
  console.log(response);
})

console.log('Executed!');
// Executed!
// Welcome
// to
// World
// !
