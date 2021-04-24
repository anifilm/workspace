// 8.3 배열 검색

/*
some 메서드는 조건에 맞는 요소를 찾으면 즉시 검색을 멈추고 true를 반환
조건에 맞는 요소를 찾지 못하면 false를 반환
*/

const arr = [5, 7, 12, 15, 17];
arr.some(x => x % 2 === 0); // true; 12는 짝수
arr.some(x => Number.isInteger(Math.sqrt(x))); // false; 제곱수 없음
