const sortDesc = arr => {
  arr.sort(
    (a, b) => b - a
  );
}

const arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];
sortDesc(arr);

console.log(arr);
