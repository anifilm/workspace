import store from '../store';

import MainHeader from '@/components/common/MainHeader.vue';
import MenuBar from '@/components/common/MenuBar.vue';
import Footer from '@/components/common/Footer.vue';

import CodeGroupListPage from '@/pages/codegroup/CodeGroupListPage.vue';
import CodeGroupRegisterPage from '@/pages/codegroup/CodeGroupRegisterPage.vue';
import CodeGroupReadPage from '@/pages/codegroup/CodeGroupReadPage.vue';
import CodeGroupModifyPage from '@/pages/codegroup/CodeGroupModifyPage.vue';

export const CodeGroupRouters = [
  {
    path: '/codegroup',
    name: 'CodeGroupListPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: CodeGroupListPage,
      footer: Footer,
    },
    beforeEnter(to, from, next) {
      const { isAdmin } = store.getters;
      if (!isAdmin) {
        alert('관리자 권한이 필요합니다.');
        next({ name: 'Signin' });
      }
      next();
    },
  },
  {
    path: '/codegroup/register',
    name: 'CodeGroupRegisterPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: CodeGroupRegisterPage,
      footer: Footer,
    },
    beforeEnter(to, from, next) {
      const { isAdmin } = store.getters;
      if (!isAdmin) {
        alert('관리자 권한이 필요합니다.');
        next({ name: 'Signin' });
      }
      next();
    },
  },
  {
    path: '/codegroup/:groupCode',
    name: 'CodeGroupReadPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: CodeGroupReadPage,
      footer: Footer,
    },
    props: {
      default: true,
    },
    beforeEnter(to, from, next) {
      const { isAdmin } = store.getters;
      if (!isAdmin) {
        alert('관리자 권한이 필요합니다.');
        next({ name: 'Signin' });
      }
      next();
    },
  },
  {
    path: '/codegroup/:groupCode/modify',
    name: 'CodeGroupModifyPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: CodeGroupModifyPage,
      footer: Footer,
    },
    props: {
      default: true,
    },
    beforeEnter(to, from, next) {
      const { isAdmin } = store.getters;
      if (!isAdmin) {
        alert('관리자 권한이 필요합니다.');
        next({ name: 'Signin' });
      }
      next();
    },
  },
]
