// 16.8 콜백 지옥

function welcomeToWorld() {
  setTimeout(() => {
    console.log('Welcome');
    setTimeout(() => {
      console.log('to');
      setTimeout(() => {
        console.log('World');
        end('!');
      }, 1000);
    }, 2000);
  }, 3000);
}

function end(response) {
  console.log(response);
}

welcomeToWorld();

console.log('Executed!');
// Executed!
// Welcome
// to
// World
// !
