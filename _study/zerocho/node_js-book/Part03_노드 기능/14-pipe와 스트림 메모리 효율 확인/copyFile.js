const fs = require('fs').promise;

fs.copyFile('./readme.txt', 'writeme.txt')
  .then(() => {
    console.log('복사 완료');
  })
  .catch((err) => {
    console.error(err);
  });
