// 1.3 네임스페이스 생성 함수

var MYPAINTER = MYPAINTER || {};

// 네임스페이스 생성을 맡아 줄 재사용 가능한 함수를 정의
MYPAINTER.createNameSpace = function (nsValue) {
  var parts = nsValue.split('.');
  var parent = MYPAINTER;

  if (parts[0] === 'MYPAINTER') {
    parts = parts.slice(1);
  }

  for (var i = 0; i < parts.length; i++) {
    if (typeof parent[parts[i]] === 'undefined') {
      parent[parts[i]] = {};
    }
    parent = parent[parts[i]];
  }

  return parent;
}

// 네임스페이스 생성 함수를 이용하여 하위 네임스페이스를 정의
MYPAINTER.app = MYPAINTER.createNameSpace('MYPAINTER.app');
MYPAINTER.model = MYPAINTER.createNameSpace('MYPAINTER.model');
MYPAINTER.view = MYPAINTER.createNameSpace('MYPAINTER.view');
MYPAINTER.control = MYPAINTER.createNameSpace('MYPAINTER.control');

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
