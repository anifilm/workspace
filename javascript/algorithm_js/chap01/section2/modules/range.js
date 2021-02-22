// range 배열 생성 함수
const range = function (arg1, arg2, arg3) {
  if (arguments.length == 1) {
    let arr = [];
    let start = 0, end = arg1
    let length = end - start;
    for (let i = 0; i < length; i++) {
      arr[i] = start;
      start++;
    }
    return arr;
  }
  else if (arguments.length == 2) {
    let arr = [];
    let start = arg1, end = arg2
    let length = end - start;
    for (let i = 0; i < length; i++) {
      arr[i] = start;
      start++;
    }
    return arr;
  }
  else if (arguments.length == 3 && arg3 < 0) {
    let arr = [];
    let start = arg1, end = arg2
    let length = start - end;
    for (let i = 0; i < length; i++) {
      arr[i] = start;
      start += arg3;
      if (start < 0) break
    }
    return arr;
  }
  else if (arguments.length == 3) {
    let arr = [];
    let start = arg1, end = arg2
    let length = end - start;
    for (let i = 0; i < length; i++) {
      arr[i] = start;
      start += arg3;
      if (start > length) break
    }
    return arr;
  }
}

module.exports = range
