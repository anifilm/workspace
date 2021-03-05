function openPop() {
  var newWin = window.open('current.html', ' ', 'width=300, height=50, left=1200, top=400');
  if (newWin == null) { // 팝업이 차단되어 있다면
    alert('팝업이 차단되어 있습니다. 팝업 차단을 해제하지고 새로고침 해주세요.');
  }
}

window.onload = openPop;
