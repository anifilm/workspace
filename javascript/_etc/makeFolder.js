const fs = require('fs');

const makeFolder = (dirname) => {
  if (!fs.existsSync(dirname)) {
    fs.mkdirSync(dirname);
  }
};

let dirname = './chap01';

for (let i = 1; i < 20; i++) {
  if (i < 10)
    dirname = `./chap0${i}`;
  else
    dirname = `./chap${i}`;
  makeFolder(dirname);
}

console.log('폴더 생성을 완료하였습니다.');
