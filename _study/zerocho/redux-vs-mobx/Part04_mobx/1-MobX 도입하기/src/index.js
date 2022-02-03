import { observable, autorun, runInAction, action } from 'mobx';

const state = observable({
  compA: 'a',
  compB: 12,
  compC: null,
});

autorun(() => {
  console.log('chagned', state.compA);
});

runInAction(() => {
  state.compA = 'b'; // mobx action
  state.compB = 'c';
  state.compC = 'd';
});

runInAction(() => {
  state.compA = 'c'; // mobx action
})

class UserStore {
  @observable name = 'zero';
  @observable age = 26;
  @observable married = false;

  @action
  changeName(value) {
    this.name = value;
  }
}
