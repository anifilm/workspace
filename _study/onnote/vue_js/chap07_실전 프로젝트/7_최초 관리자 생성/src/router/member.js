import MainHeader from '@/components/common/MainHeader.vue';
import MenuBar from '@/components/common/MenuBar.vue';
import Footer from '@/components/common/Footer.vue';

import AdminSetupPage from '@/pages/member/AdminSetupPage.vue';

export const MemberRouters = [
  {
    path: '/user/setup',
    name: 'AdminSetupPage',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: AdminSetupPage,
      footer: Footer,
    },
  },
];
