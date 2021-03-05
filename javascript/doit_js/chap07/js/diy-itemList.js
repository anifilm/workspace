function addList(e) {
  e.preventDefault();
  var item = document.querySelector('#item');
  if (item.value != '') {
    itemList.push(item.value);
  }
  item.value = '';
  item.focus();
  showList();
}

function showList() {
  // console.log(itemList);
  var list = '<ul>';
  for (var i = 0; i < itemList.length; i++) {
    list += '<li>' + itemList[i] + "<span class='close' id=" + i + '>X</span></li>';
  }
  list += '</ul>';
  document.querySelector('#itemList').innerHTML = list;

  var remove = document.querySelectorAll('.close');
  for (var i = 0; i < remove.length; i++) {
    remove[i].addEventListener('click', removeList);
  }
}

function removeList() {
  // console.log(this);
  var id = this.getAttribute('id');
  itemList.splice(id, 1);
  showList();
}

var itemList = [];
var addBtn = document.querySelector('form').addEventListener('submit', addList);
