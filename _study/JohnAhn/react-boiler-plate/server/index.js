const express = require('express');

const bodyParser = require('body-parser');
const cookieParser = require('cookie-parser');

const { User } = require('./models/User');

require('dotenv').config();
const userId = process.env.USER_ID;
const userPw = process.env.USER_PW;

const mongoose = require('mongoose');
mongoose
  .connect(
    `mongodb+srv://${userId}:${userPw}@cluster0.hpa4f.mongodb.net/react-boiler-plate?retryWrites=true&w=majority`,
    {
      useNewUrlParser: true,
      useUnifiedTopology: true,
      //useCreateIndex: true,
    },
  )
  .then(() => {
    console.log('MongoDB connecting Success!!');
  })
  .catch((err) => {
    console.log(err);
  });

const app = express();
const port = process.env.PORT || '3000';

// to not get any deprecation warning or error
// support parsing of application/x-www-form-urlencoded post data
app.use(bodyParser.urlencoded({ extended: true }));
// to get json data
// support parsing of application/json type post data
app.use(bodyParser.json());
app.use(cookieParser());

app.get('/', (req, res) => res.send('Hello World!'));

app.post('/register', (req, res) => {
  // 회원 가입 할 때 필요한 정보들을 client에서 가져오면
  // 그것들을 데이터베이스에 넣어준다.
  const user = new User(req.body);

  user.save((err, userInfo) => {
    if (err) return res.json({ success: false, err });
    return res.status(200).json({
      success: true,
    });
  });
});

app.listen(port, () =>
  console.log(
    `The server is running, please open your browser at http://localhost:${port}\n`,
  ),
);
