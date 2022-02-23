import { createWebHistory, createRouter } from 'vue-router';

const routes = [
  {
    path: '/',
    name: 'BoardListPage',
    component: () => import('../pages/BoardListPage.vue'),
  },
  {
    path: '/board/create',
    name: 'BoardRegisterPage',
    component: () => import('../pages/BoardRegisterPage.vue'),
  },
  {
    path: '/board/:boardNo',
    name: 'BoardReadPage',
    component: () => import('../pages/BoardReadPage.vue'),
  },
  {
    path: '/board/:boardNo/edit',
    name: 'BoardModifyPage',
    component: () => import('../pages/BoardModifyPage.vue'),
  },
];

const router = createRouter({
  history: createWebHistory(),
  routes,
});

export default router;
