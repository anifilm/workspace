import React from 'react';
import { HashRouter, Route } from 'react-router-dom';

import Home from './routes/Home';
import About from './routes/About';
import Detail from './routes/Detail';

import Navigation from './components/Navigation';
import './App.css';

function App() {
  return (
    <HashRouter>
      <Navigation />
      <Route path="/" exact={true} component={Home} />
      <Route path="/movie/:id" component={Detail} />
      <Route path="/about" component={About} />
    </HashRouter>
  );
}

export default App;
