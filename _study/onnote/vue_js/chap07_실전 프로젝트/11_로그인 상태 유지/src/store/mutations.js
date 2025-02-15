import api from '../api';
import Cookies from 'js-cookie';
import {
  SET_ACCESS_TOKEN,
  SET_USER_INFO,
} from './mutation-types';

export default {
  [SET_ACCESS_TOKEN](state, accessToken) {
    if (accessToken) {
      state.accessToken = accessToken;
      api.defaults.headers.common.Authorization = `Bearer ${accessToken}`;
      // 쿠키에 액세스 토큰 저장 (expires: 1 day)
      Cookies.set('accessToken', accessToken, { expires: 1 });
    }
  },
  [SET_USER_INFO](state, userInfo) {
    if (userInfo) {
      state.userInfo = userInfo;
    }
  },
};
