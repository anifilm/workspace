const fs = require('fs').promises;

const makeFile = (fileName, fileContents) => {
  fs.writeFile(fileName, fileContents)
    .catch((err) => {
      console.error(err);
    });
};

// 몇개의 파일을 생성?
const chapNum = 12
const sectNum = 20

let name = './makefile.js';
let contents = '';

for (let i = 1; i <= chapNum; i++) {
  for (let j = 1; j <= sectNum; j++) {
    name = `./${i}-${j}.js`; // 8-9.js
    makeFile(name, contents);
  }
}

console.log('파일 생성을 완료하였습니다.');
