const mongoose = require('mongoose');

const dotenv = require('dotenv');
dotenv.config();

const userId = process.env.USER_ID;
const userPw = process.env.USER_PW;

const uri = `mongodb+srv://${userId}:${userPw}@cluster0.yhhud.mongodb.net/nodejs-book?retryWrites=true&w=majority`;

const connect = () => {
  if (process.env.NODE_ENV !== 'production') {
    mongoose.set('debug', true);
  }
  mongoose.connect(uri, {
    useNewUrlParser: true,
    useCreateIndex: true,
  }, (error) => {
    if (error) {
      console.log('몽고디비 연결 에러', error);
    } else {
      console.log('몽고디비 연결 성공');
    }
  });
};

mongoose.connection.on('error', (error) => {
  console.error('몽고디비 연결 에러', error);
});
mongoose.connection.on('disconnected', () => {
  console.error('몽고디비 연결이 끊겼습니다. 연결을 재시도합니다.');
  connect();
});

module.exports = connect;
