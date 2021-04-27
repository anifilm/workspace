const fs = require('fs');

function nfcall(f, ...args) {
  return new Promise(function (resolve, reject) {
    f.call(null, ...args, function(err, ...args) {
      if(err) return reject(err);
      resolve(args.length < 2 ? args[0] : args);
    })
  })
}

function ptimeout(delay) {
  return new Promise(function (resolve, reject) {
    setTimeout(resolve, delay);
  });
}

function grun(g) {
  const it = g();
  (function iterate(val) {
    const x = it.next(val);
    if (!x.done) {
      if (x.value instanceof Promise) {
        x.value.then(iterate).catch(err => it.throw(err));
      } else {
        setTimeout(iterate, 0, x.value);
      }
    }
  })();
}

// 14.4.1 1보 전진과 2보 후퇴?

/*
Promise에는 all 메서드가 있습니다. 이 메서드는 배열로 받은 프라미스가 모두 완료될
때 완료되며, 가능하다면 비동기적 코드를 동시에 실행합니다.
theFutureIsNow 함수가 Promise.all을 사용하도록 수정하기만 하면 됩니다.
*/

function* theFutureIsNow() {
  const data = yield Promise.all([
    nfcall(fs.readFile, 'a.txt'),
    nfcall(fs.readFile, 'b.txt'),
    nfcall(fs.readFile, 'c.txt'),
  ]);
  yield ptimeout(60 * 1000);
  yield nfcall(fs.writeFile, 'd.txt', data[0] + data[1] + data[2]);
}

grun(theFutureIsNow);
