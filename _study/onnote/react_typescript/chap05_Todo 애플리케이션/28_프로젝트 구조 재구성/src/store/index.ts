import { createStore, Reducer } from 'redux';
import { composeWithDevTools } from 'redux-devtools-extension';

export default function configureStore(reducer: Reducer) {
  return createStore(reducer, composeWithDevTools());
}
