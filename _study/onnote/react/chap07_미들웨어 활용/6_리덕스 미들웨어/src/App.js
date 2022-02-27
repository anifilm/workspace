import React from 'react';
import { Route } from 'react-router-dom';

import BoardListContainer from './containers/BoardListContainer';
import BoardRegisterContainer from './containers/BoardRegisterContainer';
import BoardReadContainer from './containers/BoardReadContainer';
import BoardModifyContainer from './containers/BoardModifyContainer';

const App = () => {
  return (
    <div>
      <Route path="/" component={BoardListContainer} exact />
      <Route path="/create" component={BoardRegisterContainer} />
      <Route path="/read/:boardNo" component={BoardReadContainer} />
      <Route path="/edit/:boardNo" component={BoardModifyContainer} />
    </div>
  );
}

export default App;
