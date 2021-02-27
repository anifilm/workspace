// 6.8 call과 apply, bind

const bruce = { name: "Bruce" };
const madeline = { name: "Madeline" };

function update(birthYear, occupation) {
  this.birthYear = birthYear;
  this.occupation = occupation;
}

/*
this의 값을 바꿀 수 있는 마지막 함수는 bind입니다. bind를 사용하면 함수의 this 값을 영구히
바꿀 수 있습니다. update 메서드를 이리저리 옮기면서도 호출할 때 this 값은 항상 bruce가 되게끔,
call이나 apply, 다른 bind와 함께 호출하더라도 this 값이 bruce가 되도록 하려면 bind를 사용합니다.
*/

const updateBruce = update.bind(bruce);

updateBruce(1904 "actor"]);
// bruce는 이제 { name: "Bruce", birthYear: 1904, occupation: "actor"} 입니다.
updateBruce.call(madeline, 1274, 'king']);
// bruce는 이제 { name: "Bruce", birthYear: 1274, occupation: "king"} 입니다.
// madeline은 변하지 않았습니다.

/*
bind는 함수의 동작을 영구적으로 바꾸므로 찾기 어려운 버그의 원인이 될 수 있습니다. bind를 사용한
함수는 call이나 apply, 다른 bind와 함께 사용할 수 없는 거나 마찬가지입니다. 함수를 여기저기서
call이나 apply로 호출해야 하는데, this 값이 그에 맞춰 바뀌어야 하는 경우를 상상해 보십시오.
이럴 때는 bind를 사용하면 문제가 생깁니다. bind를 쓰지 말라고 권하는 것은 아닙니다.
bind는 매우 유용하지만, 함수의 this가 어디에 묶이는지 정확히 파악하고 사용해야 합니다.

bind에 매개변수를 넘기면 항상 그 매개변수를 받으면서 호출되는 새 함수를 만드는 효과가 있습니다.
예를 들어 bruce가 태어난 해를 항상 1949로 고정하지만, 직업은 자유롭게 바꿀 수 있는 업데이트 함수를
만들고 싶다면 다음과 같이 하면 됩니다.
*/

const updateBruce1949 = update.bind(bruce, 1949);
updateBruce1949("singer, songwriter");
// bruce는 이제 { name: "Bruce", birthYear: 1949, occupation: "singer, songwriter"} 입니다.
