const express = require('express');

const app = express();

const port = process.env.PORT || '3000';
app.set('port', port);

// 라우터
app.get('/', (req, res) => {
  res.send('hello express');
});

app.listen(port, () => {
  console.log(`The server is running, please open your browser at http://localhost:${port}\n`);
});
