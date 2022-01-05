const express = require('express');
const path = require('path');

const app = express();

const port = process.env.PORT || '3000';
app.set('port', port);

// 미들웨어
app.use((req, res, next) => {
  console.log('모든 요청에 실행하고 싶다면...');
  next();
});

// 라우터
app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, '/index.html'));
});

app.get('/user/:name', (req, res) => {
  res.send(`Hello ${req.params.name}`);
});

app.listen(port, () => {
  console.log(`The server is running, please open your browser at http://localhost:${port}\n`);
});
