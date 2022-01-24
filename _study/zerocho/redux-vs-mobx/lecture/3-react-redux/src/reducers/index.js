import { combineReducers } from 'redux';

import userReducer from './user.js';
import postReducer from './post.js';

const reducer = combineReducers({
  user: userReducer,
  posts: postReducer,
});

export default reducer;
