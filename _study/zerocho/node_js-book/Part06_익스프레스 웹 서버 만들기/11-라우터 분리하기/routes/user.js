const express = require('express');

const router = express.Router();

// GET /user 라우터
router.get('/', (req, res) => {
  res.send('Hello, User');
});

router.get('/:name', (req, res) => {
  res.send(`Hello, ${req.params.name}`);
});

module.exports = router;
