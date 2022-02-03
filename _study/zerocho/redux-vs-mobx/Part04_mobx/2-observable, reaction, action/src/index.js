import { observable, autorun, runInAction, reaction, action } from 'mobx';

const state = observable({
  compA: 'a',
  compB: 12,
  compC: null,
});

autorun(() => {
  console.log('chagned', state.compA);
});

reaction(() => {
  return state.compB; // 해당 값이 변경될 때
}, () => { // 다음 구문을 실행
  console.log('reaction', state.compB);
});

const change = action(() => { // action으로 함수화
  state.compA = 'a2'; // mobx action
});

change(); // 해당 액션 실행

runInAction(() => {
  state.compA = 'b'; // mobx action
  state.compB = 'c';
  state.compC = 'd';
});

runInAction(() => {
  state.compA = 'c'; // mobx action
})
