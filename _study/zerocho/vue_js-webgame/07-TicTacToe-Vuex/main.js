import Vue from 'vue';
import TicTacToe from './TicTacToe';
import store from './store';

new Vue({
  store,
  render: createElement => createElement(TicTacToe)
}).$mount('#root');
