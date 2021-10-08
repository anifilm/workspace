const fs = require('fs');

const makeFolder = (dirname) => {
  if (!fs.existsSync(dirname)) {
    fs.mkdirSync(dirname);
  }
};

// 몇개의 폴더를 생성?
const chapNum = 12
const sectNum = 20

let dirname = './01-1';

for (let i = 1; i <= chapNum; i++) {
  for (let j = 1; j <= sectNum; j++) {
    if (i < 10)
      dirname = `./0${i}-${j}`;  // 08-9
    else
      dirname = `./${i}-${j}`;   // 11-9
    makeFolder(dirname);
  }
}

console.log('폴더 생성을 완료하였습니다.');
