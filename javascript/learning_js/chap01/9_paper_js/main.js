$(document).ready(function () {
  'use strict';
  paper.install(window);
  paper.setup(document.getElementById('mainCanvas'));

  // 1.9 사용자 입력 처리하기
  var tool = new Tool();

  tool.onMouseDown = function (event) {
    //var c = Shape.Circle(event.point.x, event.point.y, 20);
    var c = Shape.Circle(event.point, 20);
    c.fillColor = 'green';
  };

  paper.view.draw();
  console.log('main.js loaded');
});
