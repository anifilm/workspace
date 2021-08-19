function linearSearch(n, arr) {
  let len = arr.length;
  let i = 0;
  while (i < len && n > arr[i]) i++;
  if (n === arr[i]) return i;
  return null;
}

let arr = [2, 4, 7, 12, 15, 21, 34, 35, 46, 57, 70, 82, 86, 92, 99];
console.log(linearSearch(35, arr)); // 7
