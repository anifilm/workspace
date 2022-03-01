import React from 'react';
import { Route } from 'react-router-dom';

import ItemListContainer from './containers/ItemListContainer';
import ItemRegisterContainer from './containers/ItemRegisterContainer';
import ItemReadContainer from './containers/ItemReadContainer';
import ItemModifyContainer from './containers/ItemModifyContainer';

function App() {
  return (
    <>
      <Route path="/" component={ItemListContainer} exact />
      <Route path="/create" component={ItemRegisterContainer} />
      <Route path="/read/:boardNo" component={ItemReadContainer} />
      <Route path="/edit/:boardNo" component={ItemModifyContainer} />
    </>
  );
}

export default App;
