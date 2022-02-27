import React from 'react';
import { Route } from 'react-router-dom';

import ItemListContainer from './containers/ItemListContainer';
import ItemRegisterContainer from './containers/ItemRegisterContainer';
import ItemModifyContainer from './containers/ItemModifyContainer';
import ItemReadContainer from './containers/ItemReadContainer';

const App = () => {
  return (
    <div>
      <Route path="/" component={ItemListContainer} exact />
      <Route path="/create" component={ItemRegisterContainer} />
      <Route path="/edit/:itemId" component={ItemModifyContainer} />
      <Route path="/read/:itemId" component={ItemReadContainer} />
    </div>
  );
}

export default App;
