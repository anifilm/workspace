// 1.2 전역 네임스페이스 위험성

// 1.2.4 하위 네임스페이스 개선안B 적용

// || 논리연산자의 특성을 이용하여 전역 객체가 존재하지 않으면 생성
var MYPAINTER = MYPAINTER || {};

// 모든 하위 네임스페이스 존재여부 확인 후 생성
MYPAINTER.app = MYPAINTER.app || {};
MYPAINTER.model = MYPAINTER.model || {};
MYPAINTER.view = MYPAINTER.view || {};
MYPAINTER.control = MYPAINTER.control || {};

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
