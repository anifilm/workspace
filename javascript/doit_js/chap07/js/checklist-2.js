function addList() {
    var item = document.querySelector("#item").value;  // 텍스트 필드 내용 가져옴
    if (item != null) {
        itemList.push(item);  // itemList 배열 끝에 item 변수값 추가
        document.querySelector("#item").value = "";  // id = "item"인 요소 값을 지움
        document.querySelector("#item").focus();  // 텍스트 필드에 focus() 함수 적용
    }
}

var itemList = [];

var addBtn = document.querySelector("#add");  // #add인 요소를 가져와 addBtn으로 저장
addBtn.addEventListener("click", addList);    // addBtn을 클릭하면 addList 함수 실행
