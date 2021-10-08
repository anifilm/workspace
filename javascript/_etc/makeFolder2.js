const fs = require('fs');

const makeFolder = (dirname) => {
  if (!fs.existsSync(dirname)) {
    fs.mkdirSync(dirname);
  }
};

// 몇개의 폴더를 생성?
const chapNum = 12
const sectNum = 20

let dirname = './0-00';

for (let i = 1; i <= chapNum; i++) {
  for (let j = 1; j < sectNum; j++) {
    if (j < 10)
      dirname = `./${i}-0${j}`; // 8-09
    else
      dirname = `./${i}-${j}`;  // 8-12
    makeFolder(dirname);
  }
}

console.log('폴더 생성을 완료하였습니다.');
