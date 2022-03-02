import Vue from 'vue';
import VueRouter from 'vue-router';

import { HomeRouters } from './home';

Vue.use(VueRouter);

const routes = [
  ...HomeRouters
];

const router = new VueRouter({
  mode: 'history',
  base: process.env.BASE_URL,
  routes,
});

export default router;
