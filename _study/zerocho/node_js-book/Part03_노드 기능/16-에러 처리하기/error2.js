const fs = require('fs');

setInterval(() => {
  fs.unlink('./test.js', (err) => {
    if (err) console.error(err);
  });
}, 1000);
