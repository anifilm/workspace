const express = require('express');
const app = express();

const productRoutes = require('./routes');

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
      //useFindAndModify: false,
    },
  )
  .then(() => {
    console.log('MongoDB connecting Success!!');
  })
  .catch((err) => {
    console.log(err);
  });

app.use(express.json());

app.get('/', (req, res) => {
  res.send('Hello World!');
});

app.use('/api/products', productRoutes);

app.use((error, req, res, next) => {
  res.status(500).json({ message: error.message });
});

const port = process.env.PORT || '5000';

app.listen(port, () => {
  console.log(`The server is running, please open your browser at http://localhost:${port}\n`);
});

module.exports = app;
