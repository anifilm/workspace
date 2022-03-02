import HomeHeader from '@/components/common/HomeHeader.vue';
import Footer from '@/components/common/Footer.vue';

import Signin from '@/pages/auth/Signin.vue'

export const AuthRouters = [
  {
    path: '/auth/signin',
    name: 'Signin',
    components: {
      header: HomeHeader,
      default: Signin,
      footer: Footer,
    },
  },
];
