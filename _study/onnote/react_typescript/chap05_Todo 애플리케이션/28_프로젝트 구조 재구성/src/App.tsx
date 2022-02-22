import React from 'react';

import TodosContainer from './containers/TodosContainer';

export interface Todo {
  id: number;
  text: string;
  done: boolean;
}

function App() {
  return (
    <div className="App">
      <TodosContainer />
    </div>
  );
}

export default App;
