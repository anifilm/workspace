러닝 자바스크립트 : ES6로 제대로 입문하는 모던 자바스크립트 웹 개발


## gulp 관련 전역 설치 내역

$ sudo npm install -g gulp

$ sudo npm install -g eslint


## npm init 이후 구성 내용

$ npm install --save underscore

$ npm install --save-dev gulp

$ npm install --save-dev babel-preset-es2015

- .babelrc 파일 생성
```
{ "presets": ["es2015"] }
```

$ npm install --save-dev gulp-babel@7

- gulpfile.js 파일 생성
```{.javascript}
const gulp = require('gulp');
const babel = require('gulp-babel');
const eslint = require('gulp-eslint');

gulp.task('default', function() {
  // ESLint를 실행합니다.
  gulp.src("es6/**/*.js", "public/es6/**/*.js")
    .pipe(eslint())
    .pipe(eslint.format());
  // 노드 소스
  gulp.src("es6/**/*.js")
    .pipe(babel())
    .pipe(gulp.dest("dist"));
  // 브라우저 소스
  gulp.src("public/es6/**/*.js")
    .pipe(babel())
    .pipe(gulp.dest("public/dist"));
});
```

$ npm install --save-dev gulp-eslint

- .eslintrc.js 파일 생성
```{.javascript}
module.exports = {
    "env": {
        "node": true,
        "commonjs": true,
        "es6": true
    },
    "extends": "eslint:recommended",
    "parserOptions": {
        "ecmaVersion": 2015
    },
    "rules": {
        "indent": [
            "error",
            4
        ],
        "semi": [
            "error",
            "always"
        ]
    }
};
```

## gulp-babel 설정시 주의사항 (gulp-babel@7으로 설치할 것)

$ npm install --save-dev gulp-babel@7

참고 자료: https://lucidmaj7.tistory.com/122

