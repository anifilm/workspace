import store from '../store';

import MainHeader from '@/components/common/MainHeader.vue';
import MenuBar from '@/components/common/MenuBar.vue';
import Footer from '@/components/common/Footer.vue';

import UserItemListPage from '@/pages/useritem/UserItemListPage.vue';
import UserItemReadPage from '@/pages/useritem/UserItemReadPage.vue';

export const UserItemRouters = [
  {
    path: '/useritem',
    name: 'UserItemListPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: UserItemListPage,
      footer: Footer,
    },
    beforeEnter(to, from, next) {
      const { isAuthorized } = store.getters;
      if (!isAuthorized) {
        alert('로그인이 필요합니다.');
        next({ name: 'Signin' });
      }
      next();
    },
  },
  {
    path: '/useritem/:userItemNo',
    name: 'UserItemReadPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: UserItemReadPage,
      footer: Footer,
    },
    props: {
      default: true,
    },
    beforeEnter(to, from, next) {
      const { isAuthorized } = store.getters;
      if (!isAuthorized) {
        alert('로그인이 필요합니다.');
        next({ name: 'Signin' });
      }
      next();
    },
  },
]
