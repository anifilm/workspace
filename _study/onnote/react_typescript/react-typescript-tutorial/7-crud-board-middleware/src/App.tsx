import React from 'react';
import { Route } from 'react-router-dom';

import BoardListContainer from './containers/BoardListContainer';
import BoardRegisterContainer from './containers/BoardRegisterContainer';
import BoardModifyContainer from './containers/BoardModifyContainer';
import BoardReadContainer from './containers/BoardReadContainer';

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
      <Route component={BoardListContainer} path="/" exact />
      <Route component={BoardRegisterContainer} path="/create" />
      <Route component={BoardModifyContainer} path="/edit/:boardNo" />
      <Route component={BoardReadContainer} path="/read/:boardNo" />
    </>
  );
}

export default App;
