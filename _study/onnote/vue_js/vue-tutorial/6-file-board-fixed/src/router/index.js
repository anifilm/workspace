import Vue from 'vue';
import VueRouter from 'vue-router';

import ItemListPage from '../pages/ItemListPage.vue';
import ItemRegisterPage from '../pages/ItemRegisterPage.vue';
import ItemReadPage from '../pages/ItemReadPage.vue';
import ItemModifyPage from '../pages/ItemModifyPage.vue';
//import HomeView from '../views/HomeView.vue';

Vue.use(VueRouter);

const routes = [
  {
    path: '/',
    name: 'ItemListPage',
    components: {
      default: ItemListPage,
    },
  },
  {
    path: '/item/register',
    name: 'ItemRegisterPage',
    components: {
      default: ItemRegisterPage,
    },
  },
  {
    path: '/item/:itemId',
    name: 'ItemReadPage',
    components: {
      default: ItemReadPage,
    },
    props: {
      default: true,
    },
  },
  {
    path: '/item/:itemId/modify',
    name: 'ItemModifyPage',
    components: {
      default: ItemModifyPage,
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
