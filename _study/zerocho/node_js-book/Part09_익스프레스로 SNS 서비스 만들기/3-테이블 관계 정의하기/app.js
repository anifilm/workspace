const express = require('express');
const cookieParser = require('cookie-parser');
const morgan = require('morgan');
const path = require('path');
const session = require('express-session');
const nunjucks = require('nunjucks');

const dotenv = require('dotenv');
dotenv.config();

const { sequelize } = require('./models');
const pagesRouter = require('./routes/pages');

const app = express();

const port = process.env.PORT || '3000';
app.set('port', port);

// 템플릿 엔진
app.set('view engine', 'html');
nunjucks.configure(path.join(__dirname, 'views'), {
  express: app,
  watch: true,
});

// sequelize
sequelize.sync({ force: false })
  .then(() => {
    console.log('데이터베이스 연결 성공...');
  })
  .catch((err) => {
    console.error(err);
  });

// 미들웨어
app.use(morgan('dev'));
app.use(express.static(path.join(__dirname, 'public')));
app.use(express.json());
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
}));

// 라우터
app.use('/', pagesRouter);

// 404 Not Found
app.use((req, res, next) => {
  const error = new Error(`${req.method} ${req.url} 라우터가 없습니다.`);
  error.status = 404;
  next(error);
});

// error handler
app.use((err, req, res, next) => {
  res.locals.message = err.message;
  res.locals.error = process.env.NODE_ENV !== 'production' ? err : {};
  res.status(err.status || 500);
  res.render('error');
});

app.listen(port, () => {
  console.log(`The server is running, please open your browser at http://localhost:${port}\n`);
});
