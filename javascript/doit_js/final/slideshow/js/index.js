let slides = document.querySelectorAll('#container > img'); // 이미지들을 저장한 배열
let prev = document.querySelector('#prev'); // 이전 버튼
let next = document.querySelector('#next'); // 다음 버튼

let current = 0;

showSlide(current); // showSlide() 함수를 실행해 current 위치의 이미지를 표시

prev.onclick = prevSlide; // prev를 클릭하면 prevSlide 함수 실행
next.onclick = nextSlide; // next를 클릭하면 nextSlide 함수 실행

function showSlide(n) { // 모든 이미지를 감춘 후 인덱스가 n인 이미지만 화면에 표시
  for (let i = 0; i < slides.length; i++) { // slides 배열의 처음부터 끝까지 반복
    slides[i].style.display = 'none'; // 모든 이미지를 화면에서 감춤
  }
  slides[n].style.display = 'block'; // n번째 이미지를 화면에 표시
}

function prevSlide() {
  if (current > 0) current -= 1; // 현재 이미지가 첫 번째 이미지가 아니라면 이전 위치로
  else current = slides.length - 1; // 현재 이미지가 첫 번째 이미지라면 마지막으로
  showSlide(current); // 이동한 위치의 이미지 표시
}

function nextSlide() {
  if (current < slides.length - 1) current += 1; // 현재 이미지가 마지막 이미지가 아니라면 다음 위치로
  else current = 0; // 현재 이미지가 마지막이라면 첫 번째 위치로
  showSlide(current); // 이동한 위치의 이미지 표시
}
