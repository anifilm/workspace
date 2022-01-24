import { produce } from 'immer';

const initialState = {
  isLoggingIn: false,
  data: null,
};

const userReducer = (prevState=initialState, action) => {
  return produce(prevState, (draft) => {
    switch (action.type) {
      case 'LOG_IN_REQUEST':
        draft.isLoggingIn = true;
        draft.data = null;
        break;
      case 'LOG_IN_SUCCESS':
        draft.isLoggingIn = false;
        draft.data = action.data;
        break;
      case 'LOG_IN_FAILURE':
        draft.isLoggingIn = false;
        draft.data = null;
        break;
      case 'LOG_OUT':
        draft.data = null;
        break;
      default:
        break;
    }
  });
};

export default userReducer ;
