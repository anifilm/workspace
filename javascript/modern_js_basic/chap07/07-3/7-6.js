function binarySearch(n, arr) {
  let len = arr.length;
  let left = 0, right = len - 1;
  while (left < right) {
    let middle = Math.floor((left + right) / 2);
    if (n <= arr[middle]) {
      right = middle;
    } else {
      left = middle + 1;
    }
  }
  if (n === arr[right]) return right;
  return null;
}

let arr = [2, 4, 7, 12, 15, 21, 34, 35, 46, 57, 70, 82, 86, 92, 99];
console.log(binarySearch(35, arr)); // 7
