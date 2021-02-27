var radius = document.querySelector("#radius");
var start = document.querySelector("#start");

var circleRound = document.querySelector("#round");
var circleArea = document.querySelector("#area");

start.addEventListener("click", function () {
  if (radius) {
    circleRound.value = Number(radius.value) * 2 * Math.PI;
    circleArea.value = Number(radius.value) * Number(radius.value) * Math.PI;
  }
});
