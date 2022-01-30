const express = require('express');
const cors = require('cors');
const passport = require('passport');
const session = require('session');
const cookie = require('cookie-parser');
const morgan = require('morgan');

const dotenv = require('dotenv');
dotenv.config();

const db = require('./models');
const passportConfig = require('./passport');

const userRouter = require('./routes/user');
const postRouter = require('./routes/post');

const app = express();

const port = process.env.PORT || '5000';
app.set('port', port);

db.sequelize.sync();
passportConfig();

app.use(morgan('dev'));
app.use(cors({
  origin: 'http://localhost:3000',
  credentials: true,
}));
app.use('/', express.static('uploads'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookie(process.env.COOKIE_SECRET));
app.use(session({
  resave: false,
  saveUninitialized: false,
  secret: process.env.COOKIE_SECRET,
  cookie: {
    httpOnly: true,
    secure: false,
  },
}));
app.use(passport.initialize());
app.use(passport.session());

app.get('/', (req, res) => {
  res.status(200).send('안녕! 노드버드');
});

app.use('/user', userRouter);
app.use('/post', postRouter);

app.post('/post', (req, res) => {
  if (req.isAuthenticated()) {
    //
  }
});

app.listen(port, () => {
  console.log(`노드버드 서버 ${port}번 포트에서 작동중...`);
});
