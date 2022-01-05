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
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser('cookiepasswordhere'));
//   (요청 경로)               (실제 경로)
app.use('/', express.static(path.join(__dirname, 'public'))); // 미들웨어의 순서도 중요!

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
