const fs = require('fs');

const makeFolder = (dirname) => {
  if (!fs.existsSync(dirname)) {
    fs.mkdirSync(dirname);
  }
};

let dirname = './chap01';

for (let i = 1; i < 10; i++) {
  for (let j = 1; j < 20; j++) {
    if (j < 10)
      dirname = `./${i}-0${j}`;
    else
      dirname = `./${i}-${j}`;
    makeFolder(dirname);
  }
}

console.log('폴더 생성을 완료하였습니다.');
