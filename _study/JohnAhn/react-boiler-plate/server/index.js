const express = require('express');

const app = express();
const port = process.env.PORT || '3000';

app.get('/', (req, res) => res.send('Hello World!'));

app.listen(port, () => console.log(`The server is running, please open your browser at http://localhost:${port}\n`));
