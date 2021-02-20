// 세 정수의 최댓값을 구하기

function max3(a, b, c) {
  /* a, b, c의 최댓값을 구하여 반환 */
  let max = a
  if (b > max) max = b
  if (c > max) max = c
  return max // 최대값 반환
}

console.log(`max3(3, 2, 1) = ${max3(3, 2, 1)}`) // [A] a > b > c
console.log(`max3(3, 2, 2) = ${max3(3, 2, 2)}`) // [B] a > b = c
console.log(`max3(3, 1, 2) = ${max3(3, 1, 2)}`) // [C] a > c > b
console.log(`max3(3, 2, 3) = ${max3(3, 2, 3)}`) // [D] a = c > b
console.log(`max3(2, 1, 3) = ${max3(2, 1, 3)}`) // [E] c > a > b
console.log(`max3(3, 3, 2) = ${max3(3, 3, 2)}`) // [F] a = b > c
console.log(`max3(3, 3, 3) = ${max3(3, 3, 3)}`) // [G] a = b = c
console.log(`max3(2, 2, 3) = ${max3(2, 2, 3)}`) // [H] c > a = b
console.log(`max3(2, 3, 1) = ${max3(2, 3, 1)}`) // [I] b > a > c
console.log(`max3(2, 3, 2) = ${max3(2, 3, 2)}`) // [J] b > a = c
console.log(`max3(1, 3, 2) = ${max3(1, 3, 2)}`) // [K] b > c > a
console.log(`max3(2, 3, 3) = ${max3(2, 3, 3)}`) // [L] b = c > a
console.log(`max3(1, 2, 3) = ${max3(1, 2, 3)}`) // [M] c > b > a
