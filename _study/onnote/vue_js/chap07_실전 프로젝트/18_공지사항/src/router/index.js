import Vue from 'vue';
import VueRouter from 'vue-router';

import { HomeRouters } from './home';
import { AuthRouters } from './auth';
import { MemberRouters } from './member';
import { CodeGroupRouters } from './codegroup';
import { CodeDetailRouters } from './codedetail';
import { BoardRouters } from './board';
import { NoticeRouters } from './notice';

Vue.use(VueRouter);

const routes = [
  ...HomeRouters,
  ...AuthRouters,
  ...MemberRouters,
  ...CodeGroupRouters,
  ...CodeDetailRouters,
  ...BoardRouters,
  ...NoticeRouters,
];

const router = new VueRouter({
  mode: 'history',
  base: process.env.BASE_URL,
  routes,
});

export default router;
