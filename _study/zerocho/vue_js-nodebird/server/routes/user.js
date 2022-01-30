const express = require('express');
const bcrypt = require('bcrypt');
const passport = require('passport');
const db = require('../modles');
const { idLoggedIn, isNotLoggedIn, isLoggedIn } = require('./middlewares');

const router = express.Router();

router.post('/', isNotLoggedIn, async (req, res, next) => {
  try {
    const passwordHash = await bcrypt.hash(req.body.password, 12);
    const exUser = await db.User.findOne({
      where: {
        email: req.body.email,
      },
    });
    if (exUser) { // 이미 회원가입이 되어있으면
      return res.status(403).json({
        errorCode: 1,
        message: '이미 가입된 회원입니다.'
      });
    }
    await db.User.create({
      email: req.body.email,
      nickname: req.body.nickname,
      password: passwordHash,
    });
    passport.authenticate('local', (err, user, info) => {
      if (err) {
        console.error(err);
        return next(err);
      }
      if (info) {
        return res.status(401).send(info.reason);
      }
      return req.login(user, async (err) => {
        if (err) {
          console.error(err);
          return next(err);
        }
        return res.json(user);
      });
    })(req, res, next);
  }
  catch (err) {
    console.error(`Error: ${err.message}`);
  }
});

router.post('login', isNotLoggedIn, (req, res, next) => {
  passport.authenticate('local', (err, user, info) => {
    if (err) {
      console.error(err);
      return next(err);
    }
    if (info) {
      return res.status(401).send(info.reason);
    }
    return req.login(user, async (err) => {
      if (err) {
        console.error(err);
        return next(err);
      }
      return res.json(user);
    });
  })(req, res, next);
});

router.post('/logout', isLoggedIn, (req, res) => {
  if (req.isAuthenticated()) {
    req.logout();
    res.session.destroy();
    return res.status(200).send('로그아웃 되었습니다.');
  }
});

module.exports = router;
