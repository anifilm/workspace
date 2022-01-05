const express = require('express');
const morgan = require('morgan');
const cookieParser = require('cookie-parser');
const path = require('path');

const app = express();

const port = process.env.PORT || '3000';
app.set('port', port);

// 미들웨어
app.use(morgan('dev'));
app.use(express.json()); // bodyParser 대신 사용
app.use(express.urlencoded({ extended: true }));
app.use(cookieParser('cookiesecret'));

// 라우터
app.get('/', (req, res) => {
  req.cookies; // { mycookie: 'test' }
  // 쿠키 설정
  res.cookie('name', encodeURIComponent(name), {
    expires: new Date(),
    httpOnly: true,
    path: '/',
  });
  // 쿠키 삭제
  res.clearCookie('name', encodeURIComponent(name), {
    httpOnly: true,
    path: '/',
  });

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
