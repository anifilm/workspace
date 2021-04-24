// 8.7 문자열 병합

/*
join 메서드는 매개변수로 구분자 하나를 받고 요소들을 하나로 합친 문자열을 반환
매개변수 생략시 기본값은 쉼표
문자열 요소를 합칠 때 정의되지 않은 요소, 삭제된 요소, null, undefined는 모두 빈 문자열로 취급한다.
*/

const arr = [1, null, 'hello', 'world', true, undefined];
delete arr[3];
arr.join();       // "1,,hello,,true,"
arr.join('');     // "1hellotrue"
arr.join(' -- '); // "1 --  -- hello --  -- true --"
