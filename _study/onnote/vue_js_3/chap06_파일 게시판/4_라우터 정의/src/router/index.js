import { createWebHistory, createRouter } from 'vue-router';

const routes = [
  {
    path: '/',
    name: 'ItemListPage',
    component: () => import('../pages/ItemListPage.vue'),
  },
  {
    path: '/item/create',
    name: 'ItemRegisterPage',
    component: () => import('../pages/ItemRegisterPage.vue'),
  },
  {
    path: '/item/:itemNo',
    name: 'ItemReadPage',
    component: () => import('../pages/ItemReadPage.vue'),
  },
  {
    path: '/item/:itemNo/edit',
    name: 'ItemModifyPage',
    component: () => import('../pages/ItemModifyPage.vue'),
  },
];

export const router = createRouter({
  history: createWebHistory(),
  routes,
});
