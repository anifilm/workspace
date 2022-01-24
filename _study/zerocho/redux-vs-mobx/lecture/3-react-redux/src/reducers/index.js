import { combineReducers } from 'redux';

import postReducer from './post.js';
import userReducer from './user.js';

const reducer = combineReducers({
  user: userReducer,
  posts: postReducer,
});

export default reducer;
