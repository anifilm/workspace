// 4.3.2 break나 return 문을 써서 불필요한 연산 줄이기

let firstPrime = null;
for (let n of bigArrayOfNumbers) {
  if (isPrime(n)) {
    firstPrime = n;
    break;
  }
}
