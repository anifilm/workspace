// 1.7 단순한 그래픽 그리기

$(document).ready(function () {
  'use strict';
  paper.install(window);
  paper.setup(document.getElementById('mainCanvas'));

  var c = Shape.Circle(200, 200, 50);
  c.fillColor = 'red';

  paper.view.draw();
  console.log('main.js loaded');
});
