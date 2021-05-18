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

// 코드 1-16 filter로 한 명 찾기
console.log(
  filter(users, function (user) { return user.id == 3; })[0]
);
// {id: 3, name: "BJ", age: 32}

// 코드 1-17 break
var user;
for (var i = 0, len = users.length; i < len; i++) {
  if (users[i].id == 3) {
    user = users[i];
    break;
  }
}
console.log(user);
// {id: 3, name: "BJ", age: 32}

// 코드 1-18 findById
function findById(list, id) {
  for (var i = 0, len = list.length; i < len; i++) {
    if (list[i].id == id) return list[i];
  }
}
console.log(findById(users, 3));
// {id: 3, name: "BJ", age: 32}
console.log(findById(users, 5));
// {id: 5, name: "JE", age: 27}

// 코드 1-19 findByName
function findByName(list, name) {
  for (var i = 0, len = list.length; i < len; i++) {
    if (list[i].name == name) return list[i];
  }
}
console.log(findByName(users, 'BJ'));
// {id: 3, name: "BJ", age: 32}
console.log(findByName(users, 'JE'));
// {id: 5, name: "JE", age: 27}

// 코드 1-20 findByAge
function findByAge(list, age) {
  for (var i = 0, len = list.length; i < len; i++) {
    if (list[i].age == age) return list[i];
  }
}
console.log(findByAge(users, 28));
// {id: 4, name: "PJ", age: 32}
console.log(findByAge(users, 25));
// {id: 2, name: "HA", age: 25}

// 코드 1-21 findBy
function findBy(key, list, val) {
  for (var i = 0, len = list.length; i < len; i++) {
    if (list[i][key] === val) return list[i];
  }
}
console.log(findBy('name', users, 'BJ'));
// {id: 3, name: "BJ", age: 32}
console.log(findBy('id', users, 2));
// {id: 2, name: "HA", age: 25}
console.log(findBy('age', users, 28));
// {id: 4, name: "PJ", age: 32}

// 코드 1-22 findBy로 안 되는 경우
function User(id, name, age) {
  this.getId = function () {
    return id;
  };
  this.getName = function () {
    return name;
  };
  this.getAge = function () {
    return age;
  };
}

var users2 = [
  new User(1, "ID", 32),
  new User(2, "HA", 25),
  new User(3, "BJ", 32),
  new User(4, "PJ", 28),
  new User(5, "JE", 27),
  new User(6, "JM", 32),
  new User(7, "HI", 24),
]

function findBy(key, list, val) {
  for (var i = 0, len = list.length; i < len; i++) {
    if (list[i][key] === val) return list[i];
  }
}
console.log(findBy('age', users2, 25));
// undefined
