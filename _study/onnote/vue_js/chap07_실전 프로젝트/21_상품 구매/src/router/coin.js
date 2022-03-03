import store from '../store';

import MainHeader from '@/components/common/MainHeader.vue';
import MenuBar from '@/components/common/MenuBar.vue';
import Footer from '@/components/common/Footer.vue';

import CoinChargeListPage from '@/pages/coin/CoinChargeListPage.vue';
import CoinChargeRegisterPage from '@/pages/coin/CoinChargeRegisterPage.vue';
import CoinPayListPage from '@/pages/coin/CoinPayListPage.vue';

export const CoinRouters = [
  {
    path: '/coin',
    name: 'CoinChargeListPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: CoinChargeListPage,
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
    path: '/coin/register',
    name: 'CoinChargeRegisterPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: CoinChargeRegisterPage,
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
    path: '/coin/pay',
    name: 'CoinPayListPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: CoinPayListPage,
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
]
