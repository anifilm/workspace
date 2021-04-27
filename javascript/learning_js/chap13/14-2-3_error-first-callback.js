// 14.2.3 오류 우선 콜백

const fs = require('fs');

const fname = 'may_or_may_not_exist.txt';
fs.readFile(fname, function (err, data) {
  if (err) return console.error(`error reading file ${fname}: ${err.message}`);
  console.log(`${fname} contents: ${data}`);
})
