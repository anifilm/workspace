import MainHeader from '@/components/common/MainHeader.vue';
import MenuBar from '@/components/common/MenuBar.vue';
import Footer from '@/components/common/Footer.vue';

import Home from '@/pages/Home.vue';

export const HomeRouters = [
  {
    path: '/',
    name: 'Home',
    components: {
      header: MainHeader,
      menu: MenuBar,
      default: Home,
      footer: Footer,
    },
  },
];
