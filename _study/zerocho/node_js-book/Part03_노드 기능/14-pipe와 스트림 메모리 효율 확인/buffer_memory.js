const fs = require('fs');

console.log('before:', process.memoryUsage().rss);

const data = fs.readFileSync('./big.txt');
fs.writeFileSync('./big2.txt', data);

console.log('buffer:', process.memoryUsage().rss);
