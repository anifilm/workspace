import { createStore } from 'redux';

const reducer = (prevState, action) => { // 새로운 state 만들어 주기
  switch (action.type) {
    case 'CHANGE_COMP_A':
      return {
        ...prevState,
        compA: action.data,
      };
    case 'CHANGE_COMP_B':
      return {
        ...prevState,
        compB: action.data,
      };
    case 'CHANGE_COMP_C':
      return {
        ...prevState,
        compC: action.data,
      };
    default:
      return prevState;
  }
};

const initialState = {
  compA: 'a',
  compB: 12,
  compC: null,
};

const store = createStore(reducer, initialState);
store.subscribe(() => { // react-redux 안에 있음
  console.log('changed'); // 화면을 바꿔주는 코드는 여기서
});

console.log('1st', store.getState());

const changeCompA = (data) => {
  return { // action
    type: 'CHANGE_COMP_A',
    data,
  };
};

/*store.dispatch({
  type: 'CHANGE_COMP_A',
  data: 'b',
});*/
store.dispatch(changeCompA('b'));

console.log('2nd', store.getState());
