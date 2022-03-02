import Vue from 'vue';
import App from './App.vue';
import router from './router';
import store from './store';
import Cookies from 'js-cookie';

Vue.config.productionTip = false;

// 쿠키에 저장된 토큰을 사용하여 인증
function init() {
  const savedToken = Cookies.get('accessToken');
  if (savedToken) {
    return store.dispatch('signinByToken', savedToken);
  } else {
    return Promise.resolve();
  }
}

// 비동기식 로직 처리
init().then(() => {
  new Vue({
    router,
    store,
    render: (h) => h(App),
  }).$mount('#app');
});
