// 6장에서 쓰는 함수형 라이브러리

// 모나드/함수자
const Wrapper = require('../../model/Wrapper.js').Wrapper;
const wrap = require('../../model/Wrapper.js').wrap;
const empty = require('../../model/Empty.js').empty;
const Maybe = require('../../model/monad/Maybe.js').Maybe;
const Either = require('../../model/monad/Either.js').Either;

//모델
const Student = require('../../model/Student.js').Student;
const Address = require('../../model/Address.js').Address;
const Person = require('../../model/Person.js').Person;

// 1장의 DB 도우미 사용
const db = require('../../ch01/helper').db;

// validLength :: Number, String -> Boolean
const validLength = (len, str) => str.length === len;

// find :: DB -> String -> Either(String)
const find = R.curry((db, id) => db.find(id));

// checkLengthSsn :: String -> Either(String)
const checkLengthSsn = (ssn) => {
  return Either.of(ssn).filter(R.partial(validLength, [9]));
};

// safeFindObject :: Store, string -> Either(Object)
const safeFindObject = R.curry((db, id) => Either.fromNullable(find(db, id)));

// finStudent :: String -> Either(Student)
const findStudent = safeFindObject(db);

// csv :: Array => String
const csv = (arr) => arr.join(',');

const trim = (str) => str.replace(/^\s*|\s*$/g, '');
const normalize = (str) => str.replace(/\-/g, '');
const cleanInput = R.compose(normalize, trim);

// map :: (ObjectA -> ObjectB), Monad -> Monad[ObjectB]
const map = R.curry((f, container) => container.map(f));

// chain :: (ObjectA -> ObjectB), M -> ObjectB
const chain = R.curry((f, container) => container.chain(f));

const lift = R.curry((f, obj) => Maybe.fromNullable(f(obj)));

const trace = R.curry((msg, obj) => console.log(msg));

const append = function (elementId) {
  return function (info) {
    document.querySelector(elementId).innerHTML = info;
    return info;
  };
};

const showStudent = R.compose(
  map(append('#student-info')),
  map(csv),
  map(R.props(['ssn', 'firstname', 'lastname'])),
  chain(findStudent),
  chain(checkLengthSsn),
  lift(cleanInput),
);

QUnit.test('null을 등록부에 함수형으로 추가', function (assert) {
  var result = showStudent('444-44-4444');
  assert.equal(result, 'sd');
});
