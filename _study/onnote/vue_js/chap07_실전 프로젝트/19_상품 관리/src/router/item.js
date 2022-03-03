import store from '../store';

import MainHeader from '@/components/common/MainHeader.vue';
import MenuBar from '@/components/common/MenuBar.vue';
import Footer from '@/components/common/Footer.vue';

import ItemListPage from '@/pages/item/ItemListPage.vue';
import ItemRegisterPage from '@/pages/item/ItemRegisterPage.vue';
import ItemReadPage from '@/pages/item/ItemReadPage.vue';
import ItemModifyPage from '@/pages/item/ItemModifyPage.vue';

export const ItemRouters = [
  {
    path: '/item',
    name: 'ItemListPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: ItemListPage,
      footer: Footer,
    },
  },
  {
    path: '/item/register',
    name: 'ItemRegisterPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: ItemRegisterPage,
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
    path: '/item/:itemId',
    name: 'ItemReadPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: ItemReadPage,
      footer: Footer,
    },
    props: {
      default: true,
    },
  },
  {
    path: '/item/:itemId/modify',
    name: 'ItemModifyPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: ItemModifyPage,
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
      store.dispatch('fetchBoard', to.params.itemId)
        .then(() => {
          const item = store.state.item;
          const isAuthor = item.writer === store.state.userInfo.userId;
          if (isAuthor) {
            next();
          } else {
            alert('게시물의 작성자만 수정할 수 있습니다.');
            next(false);
          }
        })
        .catch((err) => {
          alert(err.response.data.message);
          next(false);
        });
    },
  },
]
