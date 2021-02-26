function showBig() {
  var newPic = this.src;
  bigPic.setAttribute("src", newPic);
}
var isOpen = false;
var bigPic = document.querySelector("#cup");
var smallPics = document.querySelectorAll(".small");

for (var i = 0; i < smallPics.length; i++) {
  smallPics[i].onclick = showBig;
}

var view = document.querySelector("#view");
view.addEventListener("click", function() {
  if (isOpen == false) {
    document.querySelector("#detail").style.display = "block";
    view.innerText = "상세 설명 닫기";
    isOpen = true;
  } else {
    document.querySelector("#detail").style.display = "none";
    view.innerText = "상세 설명 보기";
    isOpen = false;
  }
});
