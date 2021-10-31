// 16.11 프로미스를 반환하는 비동기 함수 사용

function welcome(resolve, reject) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log('Welcome');
      resolve();
    }, 3000);
  });
}

function to(resolve, reject) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log('to');
      resolve();
    }, 2000);
  });
}

function world(resolve, reject) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log('World');
      resolve('!');
    }, 1000);
  });
}

function end(response) {
  console.log(response);
}

welcome().then((response) => {
  return to();
}).then((response) => {
  return world();
}).then((response) => {
  end(response);
})

console.log('Executed!');
// Executed!
// Welcome
// to
// World
// !
