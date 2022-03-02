import store from '../store';

import MainHeader from '@/components/common/MainHeader.vue';
import MenuBar from '@/components/common/MenuBar.vue';
import Footer from '@/components/common/Footer.vue';

import CodeDetailListPage from '@/pages/codedetail/CodeDetailListPage.vue';
import CodeDetailRegisterPage from '@/pages/codedetail/CodeDetailRegisterPage.vue';
import CodeDetailReadPage from '@/pages/codedetail/CodeDetailReadPage.vue';
import CodeDetailModifyPage from '@/pages/codedetail/CodeDetailModifyPage.vue';

export const CodeDetailRouters = [
  {
    path: '/codedetail',
    name: 'CodeDetailListPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: CodeDetailListPage,
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
    path: '/codedetail/register',
    name: 'CodeDetailRegisterPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: CodeDetailRegisterPage,
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
    path: '/codedetail/:groupCode/:codeValue',
    name: 'CodeDetailReadPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: CodeDetailReadPage,
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
    path: '/codedetail/:groupCode/:codeValue/modify',
    name: 'CodeDetailModifyPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: CodeDetailModifyPage,
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
