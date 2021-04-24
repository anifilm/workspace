// 8.3 배열 검색

/*
findIndex는 일치하는 것을 찾지 못했을 때 -1을 반환한다는 점에서는 indexOf와 비슷
하지만, 보조 함수를 사용해서 검색 조건을 지정할 수 있으므로 indexOf보다 더 다양한
상황에서 활용할 수 있다.
*/

const arr = [{ id: 5, name: 'Judith' }, { id: 7, name: 'Francis' }];
arr.findIndex(o => o.id === 5); // 0
arr.findIndex(o => o.name === 'francis'); // 1
arr.findIndex(o => o === 3); // -1
arr.findIndex(o => o.id === 17); // -1
