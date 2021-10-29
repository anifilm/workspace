// 1.1 네임스페이스 생성

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

console.log(MYPAINTER.app.Constants.TITLE); // Painter
