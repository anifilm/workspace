import React from 'react';
import { Route } from 'react-router-dom';

import ItemListContainer from './containers/ItemListContainer';
import ItemRegisterContainer from './containers/ItemRegisterContainer';
import ItemReadContainer from './containers/ItemReadContainer';
import ItemModifyContainer from './containers/ItemModifyContainer';

export interface Item {
  readonly itemId: string;
  readonly itemName: string;
  readonly price: number;
  readonly description: string;
}

function App() {
  return (
    <>
      <Route path="/" component={ItemListContainer} exact />
      <Route path="/create" component={ItemRegisterContainer} />
      <Route path="/read/:itemId" component={ItemReadContainer} />
      <Route path="/edit/:itemId" component={ItemModifyContainer} />
    </>
  );
}

export default App;
