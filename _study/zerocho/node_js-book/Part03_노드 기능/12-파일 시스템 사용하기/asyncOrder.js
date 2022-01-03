const fs = require('fs');

console.log('시작');

// 비동기 메서드로 순서 유지 1 (콜백 형식)
fs.readFile('./readme2.txt', (err, data) => {
  if (err) throw err;
  console.log('1번', data.toString());

  fs.readFile('./readme2.txt', (err, data) => {
    if (err) throw err;
    console.log('2번', data.toString());

    fs.readFile('./readme2.txt', (err, data) => {
      if (err) throw err;
      console.log('3번', data.toString());

      fs.readFile('./readme2.txt', (err, data) => {
        if (err) throw err;
        console.log('4번', data.toString());

        console.log('끝');
      });
    });
  });
});
