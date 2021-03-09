let sUnit = document.querySelector('#s-unit'); // 왼쪽 필드의 단위
let tUnit = document.querySelector('#t-unit'); // 오른쪽 필드의 단위
let cToF = true; // 섭씨에서 화씨로 변환 (Celsius to Fahrenheit)

let source = document.querySelector('#s-value'); // 왼쪽 텍스트 필드
let target = document.querySelector('#t-value'); // 오른쪽 텍스트 필드

function exUnit() {
  source.value = ''; // 왼쪽 테스트 필드 값 지움
  target.value = ''; // 오른쪽 테스트 필드 값 지움

  if (cToF) { // 현재 '섭씨'에서 '화씨'로 변환 상태라면
    cToF = false; // '화씨'에서 '섭씨' 변환 상태로 전환
    sUnit.innerHTML = '&#8457;'; // 왼쪽 단위 필드에 화씨 기호 표시
    tUnit.innerHTML = '&#8451;'; // 오른쪽 단위 필드에 섭씨 기호 표시
  } else { // 현재 '화씨'에서 '섭씨' 변환 상태라면
    cToF = true; // '섭씨'에서 '화씨' 변환 상태로 전환
    sUnit.innerHTML = '&#8451;';
    tUnit.innerHTML = '&#8457;';
  }
}

function converter() {
  if (cToF) {
    target.value = (source.value * 1.8 + 3.2).toFixed(2); // 섭씨 -> 화씨 계산
  } else {
    target.value = ((source.value - 32) / 1.8).toFixed(2); // 화씨 -> 섭씨 계산
  }
}
