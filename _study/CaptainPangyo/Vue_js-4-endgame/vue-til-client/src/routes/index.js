import Vue from 'vue';
import VueRouter from 'vue-router';

//import LoginPage from '@/views/LoginPage.vue';
//import SignupPage from '@/views/SignupPage.vue';
//import NotFoundPage from '@/views/NotFoundPage.vue';

Vue.use(VueRouter);

export default new VueRouter({
  mode: 'history',
  routes: [
    {
      path: '/',
      redirect: '/login'
    },
    {
      path: '/login',
      //component: LoginPage
      component: () => import('@/views/LoginPage.vue')
    },
    {
      path: '/signup',
      //component: SignupPage
      component: () => import('@/views/SignupPage.vue')
    },
    {
      path: '*',
      //component: NotFoundPage
      component: () => import('@/views/NotFoundPage.vue')
    }
  ]
});
