// 4.3.3 루프를 완료한 뒤 인덱스 값 사용하기

let i = 0;
for ( ; bigArrayOfNumbers.length; i++) {
  if (isPrime(bigArrayOfNumbers[i])) break;
}

if (i === bigArrayOfNumbers.length)
  console.log('No prime numbers!');
else console.log(`First prime number found at position ${i}`);
