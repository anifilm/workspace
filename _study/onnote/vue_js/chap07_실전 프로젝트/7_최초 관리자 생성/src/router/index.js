import Vue from 'vue';
import VueRouter from 'vue-router';

import { HomeRouters } from './home';
import { AuthRouters } from './auth';
import { MemberRouters } from './member';

Vue.use(VueRouter);

const routes = [
  ...HomeRouters,
  ...AuthRouters,
  ...MemberRouters,
];

const router = new VueRouter({
  mode: 'history',
  base: process.env.BASE_URL,
  routes,
});

export default router;
