function fact(n) {
  let k = 1, i = n;
  do {
    k *= i--;
  } while (i > 0);
  return k;
}

fact(5); // 120
console.log(fact(5));
