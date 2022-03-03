import store from '../store';

import MainHeader from '@/components/common/MainHeader.vue';
import MenuBar from '@/components/common/MenuBar.vue';
import Footer from '@/components/common/Footer.vue';

import NoticeListPage from '@/pages/notice/NoticeListPage.vue';
import NoticeRegisterPage from '@/pages/notice/NoticeRegisterPage.vue';
import NoticeReadPage from '@/pages/notice/NoticeReadPage.vue';
import NoticeModifyPage from '@/pages/notice/NoticeModifyPage.vue';

export const NoticeRouters = [
  {
    path: '/notice',
    name: 'NoticeListPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: NoticeListPage,
      footer: Footer,
    },
  },
  {
    path: '/notice/register',
    name: 'NoticeRegisterPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: NoticeRegisterPage,
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
    path: '/notice/:noticeNo',
    name: 'NoticeReadPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: NoticeReadPage,
      footer: Footer,
    },
    props: {
      default: true,
    },
  },
  {
    path: '/notice/:noticeNo/modify',
    name: 'NoticeModifyPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: NoticeModifyPage,
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
      store.dispatch('fetchNotice', to.params.noticeNo)
        .then(() => {
          const notice = store.state.notice;
          const isAuthor = notice.writer === store.state.userInfo.userId;
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
