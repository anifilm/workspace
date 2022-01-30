const passport = require('passport');
const bcrypt = require('bcrypt');
const { Strategy: LocalStrategy } = require('passport-local');
const db = require('../models');

module.exports = () => {
  passport.use(
    new LocalStrategy(
      {
        usernameField: 'email',
        passwordField: 'password',
      },
      async (email, password, done) => {
        try {
          const exUser = await db.User.fineOne({ where: { email } });
          if (!exUser) {
            return done(null, false, { reason: '등록되지 않은 사용자입니다.' });
          }
          const result = await bcrypt.compare(password, exUser.password);
          if (result) {
            return done(null, exUser);
          } else {
            return done(null, false, {
              reason: '비밀번호가 일치하지 않습니다.',
            });
          }
        } catch (err) {
          console.error(err);
          return done(err);
        }
      },
    ),
  );
};
