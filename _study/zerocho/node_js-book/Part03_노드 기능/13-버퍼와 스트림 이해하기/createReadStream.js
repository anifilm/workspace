const fs = require('fs');

// hidhtWaterMark -> 버퍼의 크기 (바이트, 기본값 64KB)
const readStream = fs.createReadStream('./readme.txt', { highWaterMark: 16 });
const data = [];

readStream.on('data', (chunk) => {
  data.push(chunk);
  console.log('data:', chunk, chunk.length);
});

readStream.on('end', () => {
  console.log('end:', Buffer.concat(data).toString());
});

readStream.on('error', (err) => {
  console.log('error:', err);
});
