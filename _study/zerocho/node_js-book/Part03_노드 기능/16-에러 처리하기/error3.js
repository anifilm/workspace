const fs = require('fs').promises;

setInterval(() => {
  fs.unlink('./test.js');
}, 1000);
