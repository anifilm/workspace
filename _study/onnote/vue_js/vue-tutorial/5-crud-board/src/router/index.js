import Vue from 'vue';
import VueRouter from 'vue-router';

import BoardListPage from '../pages/BoardListPage.vue';
import BoardRegisterPage from '../pages/BoardRegisterPage.vue';
import BoardModifyPage from '../pages/BoardModifyPage.vue';
import BoardReadPage from '../pages/BoardReadPage.vue';
//import HomeView from '../views/HomeView.vue';

Vue.use(VueRouter);

const routes = [
  {
    path: '/',
    name: 'BoardListPage',
    components: {
      default: BoardListPage,
    },
  },
  {
    path: '/board/create',
    name: 'BoardRegisterPage',
    components: {
      default: BoardRegisterPage,
    },
  },
  {
    path: '/board/:boardNo',
    name: 'BoardReadPage',
    components: {
      default: BoardReadPage,
    },
    props: {
      default: true,
    },
  },
  {
    path: '/board/:boardNo/edit',
    name: 'BoardModifyPage',
    components: {
      default: BoardModifyPage,
    },
    props: {
      default: true,
    },
  },
  /*
  {
    path: '/',
    name: 'home',
    component: HomeView,
  },
  {
    path: '/about',
    name: 'about',
    component: () => import('../views/AboutView.vue'),
  },
  */
];

const router = new VueRouter({
  mode: 'history',
  base: process.env.BASE_URL,
  routes,
});

export default router;
