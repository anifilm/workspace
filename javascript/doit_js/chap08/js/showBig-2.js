var bigPic = document.querySelector("#cup");  // 큰 이미지 가져옴
var smallPics = document.querySelectorAll(".small");  // 작은 이미지를 가져옴 (노드 리스트)

for (var i = 0; i < smallPics.length; i++) {  // 노드 리스트의 각 요소에 접근
  // setAttribute() 함수 대신 속성 사용하기
  smallPics[i].onclick = function(event) {
    bigPic.src = this.src;
  }
}
