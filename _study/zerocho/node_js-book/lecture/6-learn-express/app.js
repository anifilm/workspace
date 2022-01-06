const express = require('express');
const morgan = require('morgan');
const cookieParser = require('cookie-parser');
const session = require('express-session');
const path = require('path');
const nunjucks = require('nunjucks');

const dotenv = require('dotenv');
dotenv.config();

const indexRouter = require('./routes');
const userRouter = require('./routes/user');

const app = express();

const port = process.env.PORT || '3000';
app.set('port', port);

// 템플릿 엔진
app.set('view engine', 'html');
nunjucks.configure(path.join(__dirname, 'views'), {
  express: app,
  watch: true,
});

// 미들웨어
app.use(morgan('dev'));
app.use(express.static(path.join(__dirname, 'public')));
app.use(express.json()); // bodyParser 대신 사용
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser(process.env.COOKIE_SECRET));
app.use(session({
  resave: false,
  saveUninitialized: false,
  secret: process.env.COOKIE_SECRET,
  cookie: {
    httpOnly: true,
    secure: false,
  },
  name: 'session-cookie',
}));

const multer = require('multer');
const fs = require('fs');

try {
  fs.readdirSync(path.join(__dirname, 'public/upload'));
}
catch (err) {
  console.error('upload 폴더가 없으므로 해당 폴더를 생성합니다.');
  fs.mkdirSync(path.join(__dirname, 'public/upload'));
}
const upload = multer({
  storage: multer.diskStorage({
    destination(req, file, done) {
      done(null, path.join(__dirname, 'public/upload/'));
    },
    filename(req, file, done) {
      const ext = path.extname(file.originalname);
      done(null, path.basename(file.originalname, ext) + '_' + Date.now() + ext);
    },
  }),
  limits: {
    fileSize: 5 * 1024 * 1024, // 5MB
  },
});
// 파일 전송 라우터
app.get('/upload', (req, res) => {
  res.sendFile(path.join(__dirname, 'multipart.html'));
});
app.post('/upload', upload.single('image'), (req, res) => {
  console.log(req.file);
  res.send('ok');
});

// 라우터
app.use('/', indexRouter);
app.use('/user', userRouter);

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
