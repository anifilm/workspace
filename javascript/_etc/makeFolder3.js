const fs = require('fs');

const makeFolder = (dirname) => {
  if (!fs.existsSync(dirname)) {
    fs.mkdirSync(dirname);
  }
};

let dirname_base = './5-';
let number = 69

for (let i = 1; i <= number; i++) {
  let dirname = '';
  if (i < 10)
    dirname = dirname_base + `0${i}`;
  else
    dirname = dirname_base + `${i}`;
  makeFolder(dirname);
}

console.log('폴더 생성을 완료하였습니다.');
