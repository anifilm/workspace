// 예제 8-16 메모이제이션 (인수를 여러 개 받을 수 있음)

function memorize(f) {
  const cache = {};
  return function () {
    // 인수를 쉼표로 연결한 문자열을 만들어서, 캐시의 키 값으로 사용
    let key = '';
    for (let i = 0; i < arguments.length; i++) {
      key += arguments[i] + ',';
    }
    if (cache[key] === undefined) cache[key] = f.apply(null, arguments);
    return cache[key];
  };
}
