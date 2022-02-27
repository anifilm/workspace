import { handleActions } from 'redux-actions';

// 상품 사가 함수 작성
export function* itemSaga() {

}

// 초기 상태
const initialState = {
  item: null,
  items: [],
  error: null,
};

// 리듀서 함수 정의
const item = handleActions(
  {},
  initialState,
);

export default item;
