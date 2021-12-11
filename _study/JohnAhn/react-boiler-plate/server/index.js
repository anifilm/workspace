const express = require('express');

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
  .catch((e) => {
    console.log(e);
  });

const app = express();
const port = process.env.PORT || '3000';

app.get('/', (req, res) => res.send('Hello World!'));

app.listen(port, () =>
  console.log(
    `The server is running, please open your browser at http://localhost:${port}\n`,
  ),
);
