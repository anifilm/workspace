// 8.3 배열 검색

/*
every 메서드는 배열의 모든 요소가 조건에 맞으면 true를 반환
그렇지 않다면 false를 반환
*/

const arr = [4, 6, 16, 36];
arr.every(x => x % 2 === 0); // true; 홀수가 없다.
arr.every(x => Number.isInteger(Math.sqrt(x))); // false; 6은 제곱수가 아니다.
