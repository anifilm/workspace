import HomeHeader from '@/components/common/HomeHeader.vue';
import Footer from '@/components/common/Footer.vue';

import Signin from '@/pages/auth/Signin.vue';
import Signup from '@/pages/auth/Signup.vue';

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
  {
    path: '/auth/signup',
    name: 'Signup',
    components: {
      header: HomeHeader,
      default: Signup,
      footer: Footer,
    },
  },
];
