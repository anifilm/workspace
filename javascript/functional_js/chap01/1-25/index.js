var users = [
  { id: 1, name: 'ID', age: 32 },
  { id: 2, name: 'HA', age: 25 },
  { id: 3, name: 'BJ', age: 32 },
  { id: 4, name: 'PJ', age: 28 },
  { id: 5, name: 'JE', age: 27 },
  { id: 6, name: 'JM', age: 32 },
  { id: 7, name: 'HI', age: 24 },
];

function filter(list, predicate) {
  var new_list = [];
  for (var i = 0, len = list.length; i < len; i++) {
    if (predicate(list[i])) new_list.push(list[i]);
  }
  return new_list;
}

function map(list, iteratee) {
  var new_list = [];
  for (var i = 0, len = list.length; i < len; i++) {
    new_list.push(iteratee(list[i]));
  }
  return new_list;
}

function find(list, predicate) {
  for (var i = 0, len = list.length; i < len; i++) {
    if (predicate(list[i])) return list[i];
  }
}

// 코드 1-25 bmatch1로 predicate 만들기
function bmatch1(key, val) {
  return function (obj) {
    return obj[key] === val;
  }
}

console.log(find(users, bmatch1('id', 1)));
// {id: 1, name: "ID", age: 32}
console.log(find(users, bmatch1('name', 'HI')));
// {id: 7, name: "HI", age: 24}
console.log(find(users, bmatch1('age', 27)));
// {id: 5, name: "JE", age: 27}

// 코드 1-26 bmatch1로 함수를 만들어 고차 함수와 협업하기
console.log(filter(users, bmatch1('age', 32)));
// [{id: 1, name: "ID", age: 32},
//  {id: 3, name: "BJ", age: 32},
//  {id: 6, name: "JM", age: 32}]

console.log(map(users, bmatch1('age', 32)));
[true,  false, true,  false, false, true, false]

// 코드 1-27 bmatch
function object(key, val) {
  var obj = {};
  obj[key] = val;
  return obj;
}
function match(obj, obj2) {
  for (var key in obj2) {
    if (obj[key] !== obj2[key]) return false;
  }
  return true;
}
function bmatch(obj2, val) {
  if (arguments.length == 2) obj2 = object(obj2, val);
  return function (obj) {
    return match(obj, obj2);
  }
}

console.log(
  match(find(users, bmatch('id', 3)), find(users, bmatch('name', 'BJ')))
);
// true
console.log(
  find(users, function (u) { return u.age == 32 && u.name == 'JM' })
);
// {id: 6, name: "JM", age: 32}
console.log(
  find(users, bmatch({ name: 'JM', age: 32 }))
);
// {id: 6, name: "JM", age: 32}

// 코드 1-28 findIndex
function findIndex(list, predicate) {
  for (var i = 0, len = list.length; i < len; i++) {
    if (predicate(list[i])) return i;
  }
  return -1;
}

console.log(findIndex(users, bmatch({ name: 'JM', age: 32 })));
// 5
console.log(findIndex(users, bmatch({ age: 36 })));
// -1
