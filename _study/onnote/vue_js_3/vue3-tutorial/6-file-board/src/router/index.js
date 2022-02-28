import { createWebHistory, createRouter } from 'vue-router';

const routes = [
  {
    path: '/',
    name: 'ItemListPage',
    component: () => import('../pages/ItemListPage.vue'),
  },
  {
    path: '/item/register',
    name: 'ItemRegisterPage',
    component: () => import('../pages/ItemRegisterPage.vue'),
  },
  {
    path: '/item/:itemId',
    name: 'ItemReadPage',
    component: () => import('../pages/ItemReadPage.vue'),
  },
  {
    path: '/item/:itemId/modify',
    name: 'ItemModifyPage',
    component: () => import('../pages/ItemModifyPage.vue'),
  },
];

export const router = createRouter({
  history: createWebHistory(),
  routes,
});
