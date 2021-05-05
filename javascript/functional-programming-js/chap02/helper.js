/**
 * 도우미 객체/함수
 * 저자: 루이스 아텐시오
 */
var isObject = (val) => val && typeof val === 'object';

function deepFreeze(obj) {
  if (isObject(obj) && !Object.isFrozen(obj)) {
    Object.keys(obj).forEach((name) => deepFreeze(obj[name]));
    Object.freeze(obj);
  }
  return obj;
}

module.exports = {
  deepFreeze: deepFreeze,
};
