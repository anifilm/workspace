// 14.3.1 프라미스 만들기

function countdown(seconds) {
  return new Promise(function (resolve, reject) {
    for (let i = seconds; i >= 0; i--) {
      setTimeout(function () {
        if (i > 0) console.log(i + '...');
        else resolve(console.log('Go!'));
      }, (seconds - i) * 1000);
    }
  })
}

// 14.3.2 프라미스 사용
countdown(5).then(
  function () {
    console.log('countdown completed successfully');
  },
  function (err) {
    console.log('countdown experienced an error: ' + err.message);
  }
);

const p = countdown(5);
p.then(function () {
  console.log('countdown completed successfully');
});
p.then(function (err) {
  console.log('countdown experienced an error: ' + err.message);
});
