import React from 'react';
import ReactDOM from 'react-dom';
import { ThemeProvider } from 'styled-components';
import App from './App';

const darkTheme = {
  bgColor: '#111',
  textColor: 'whitesmoke',
};
const lightTheme = {
  bgColor: 'whitesmoke',
  textColor: '#111',
};

ReactDOM.render(
  <React.StrictMode>
    <ThemeProvider theme={darkTheme}>
      <App />
    </ThemeProvider>
  </React.StrictMode>,
  document.getElementById('root')
);
