const express = require('express');
const path = require('path');

const app = express();

const port = process.env.PORT || '3000';
app.set('port', port);

// 미들웨어
app.use((req, res, next) => {
  console.log('모든 요청에 실행하고 싶다면...');
  next();
}, (req, res, next) => {
  try {
    console.log(error_test);
  }
  catch (err) {
    next(err);
  }
});

// 라우터
app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, '/index.html'));
});

app.get('/user/:name', (req, res) => {
  res.send(`Hello ${req.params.name}`);
});

// 404 Not Found
app.use((req, res, next) => {
  res.status(400).send('404 Not Found');
});

// error handler
app.use((err, req, res, next) => {
  console.error(err);
  res.status(500).send('error');
});

app.listen(port, () => {
  console.log(`The server is running, please open your browser at http://localhost:${port}\n`);
});
