// 1.2 전역 네임스페이스 위험성

// 1.2.2 개선안A: typeof 연산자 이용

var MYPAINTER = {};

// 하위 네임스페이스를 만든다.
MYPAINTER.app = {};
MYPAINTER.model = {};
MYPAINTER.view = {};
MYPAINTER.control = {};

// 생성한 네임스페이스에 생성자 함수를 정의한다.
MYPAINTER.app.Constants = function () { };
MYPAINTER.app.Main = function () { };
MYPAINTER.model.Model = function () { };
MYPAINTER.view.View = function () { };
MYPAINTER.control.Controller = function () { };

// 생성자에 프로퍼티를 정의한다.
MYPAINTER.app.Constants.TITLE = 'Painter';
MYPAINTER.app.Constants.WIDTH = 600;
MYPAINTER.app.Constants.HEIGHT = 400;

console.log(MYPAINTER.app.Constants.TITLE);  // Painter
console.log(MYPAINTER.app.Constants.WIDTH);  // 600
console.log(MYPAINTER.app.Constants.HEIGHT); // 400

// 전역 객체가 존재하는지 typeof 연산자로 확인
if (typeof MYPAINTER === 'undefined') {
  var MYPAINTER = {};
}

console.log(MYPAINTER.app); // {Constants: ƒ, Main: ƒ}

console.log(MYPAINTER.app.Constants.TITLE);  // Painter
console.log(MYPAINTER.app.Constants.WIDTH);  // 600
console.log(MYPAINTER.app.Constants.HEIGHT); // 400
