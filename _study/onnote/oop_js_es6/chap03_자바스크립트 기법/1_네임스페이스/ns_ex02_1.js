// 1.2 전역 네임스페이스 위험성

// 1.2.1 위험한 예

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

// 네임스페이스를 위해 이미 사용하고 있는 전역 객체를 덮어쓴다.
MYPAINTER = {};

// 전역 객체가 초기화된다.
console.log(MYPAINTER.app); // undefined

// TypeError: Cannot read property 'Constants' of undefined
console.log(MYPAINTER.app.Constants.TITLE);
console.log(MYPAINTER.app.Constants.WIDTH);
console.log(MYPAINTER.app.Constants.HEIGHT);
