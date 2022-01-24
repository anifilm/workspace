import { combineReducers } from 'redux';

import userSlice from './userSlice.js';
import postSlice from './postSlice.js';

const reducer = combineReducers({
  user: userSlice,
  posts: postSlice,
});

export default reducer;
