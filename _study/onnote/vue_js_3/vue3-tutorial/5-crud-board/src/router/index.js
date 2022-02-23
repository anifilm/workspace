import { defineComponent } from 'vue';
import { createWebHistory, createRouter } from 'vue-router';

import BoardListPage from '../pages/BoardListPage.vue';
import BoardRegisterPage from '../pages/BoardRegisterPage.vue';
import BoardReadPage from '../pages/BoardReadPage.vue';
import BoardModifyPage from '../pages/BoardModifyPage.vue';

const NotFound = defineComponent({
  template: '<div>Not Found</div>',
});

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
  {
    path: '/:catchAll(.*)+',
    component: NotFound,
  },
];

export const router = createRouter({
  history: createWebHistory(),
  routes,
});
