const express = require('express');
const path = require('path');

const app = express();

const port = process.env.PORT || '3000';
app.set('port', port);

// 라우터
app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, '/index.html'));
});

app.listen(port, () => {
  console.log(`The server is running, please open your browser at http://localhost:${port}\n`);
});
