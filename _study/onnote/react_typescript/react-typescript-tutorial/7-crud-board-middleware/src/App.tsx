import React from 'react';
import { Route } from 'react-router-dom';

import BoardListContainer from './containers/BoardListContainer';
import BoardRegisterContainer from './containers/BoardRegisterContainer';
import BoardReadContainer from './containers/BoardReadContainer';
import BoardModifyContainer from './containers/BoardModifyContainer';

export interface Board {
  readonly boardNo: string;
  readonly title: string;
  readonly writer: string;
  readonly content: string;
  readonly regDate: string;
}

function App() {
  return (
    <>
      <Route path="/" component={BoardListContainer} exact />
      <Route path="/create" component={BoardRegisterContainer} />
      <Route path="/read/:boardNo" component={BoardReadContainer} />
      <Route path="/edit/:boardNo" component={BoardModifyContainer} />
    </>
  );
}

export default App;
