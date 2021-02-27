var userId = document.querySelector("#user-id");
var pw1 = document.querySelector("#user-pw1");
var pw2 = document.querySelector("#user-pw2");

function checkId() {
  if (userId.value.length < 4 || userId.value.length > 15) {
    alert("4~5자리의 영문과 숫자를 사용하세요.");
    //userId.value = ""; // 엔터키 입력시 필드를 다시 선택되게 하려면 필드를 비워야함
    userId.select();
  }
}

function checkPw() {
  if (pw1.value.length < 8) {
    alert("비밀번호는 8자리 이상이어야 합니다.");
    pw1.value = "";
    pw1.focus();
  }
}

function comparePw() {
  if (pw1.value != pw2.value) {
    alert("암호가 다릅니다. 다시 입력하세요.");
    pw2.value = "";
    pw2.focus();
  }
}
