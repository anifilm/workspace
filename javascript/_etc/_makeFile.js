const fs = require('fs').promises;

const makeFile = (fileName, fileContents) => {
  fs.writeFile(fileName, fileContents)
    .catch((err) => {
      console.error(err);
    });
};

let name = './makefile.js';
let contents = '';

for (let i = 1; i < 10; i++) {
  for (let j = 1; j < 10; j++) {
    name = `./${i}-${j}.js`;
    makeFile(name, contents);
  }
}

console.log('파일 생성을 완료하였습니다.');
