var selectMenu = document.testForm.major;  // 선택 목록을 가져와 selectMenu로 저장

function displaySelect() {
  var selectedText = selectMenu.options[selectMenu.selectedIndex].innerText; // 선택한 옵션의 innerText를 가져와 selectedText에 저장
  alert("[" + selectedText + "]를 선택했습니다."); // selectedText 내용을 알림 창에 표시
}
