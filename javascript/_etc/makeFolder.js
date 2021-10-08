const fs = require('fs');

const makeFolder = (dirname) => {
  if (!fs.existsSync(dirname)) {
    fs.mkdirSync(dirname);
  }
};

// 몇개의 폴더를 생성?
const chapNum = 12

let dirname = 'chap00';

for (let i = 1; i <= chapNum; i++) {
  if (i < 10)
    dirname = `./chap0${i}`;
  else
    dirname = `./chap${i}`;
  makeFolder(dirname);
}

console.log('폴더 생성을 완료하였습니다.');
