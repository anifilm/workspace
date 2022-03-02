import api from '../api';
import Cookies from 'js-cookie';
import {
  SET_ACCESS_TOKEN,
  SET_USER_INFO,
  DESTROY_ACCESS_TOKEN,
  DESTROY_USER_INFO,
  FETCH_CODEGROUP_LIST,
  FETCH_CODEGROUP,
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
  [DESTROY_ACCESS_TOKEN](state) {
    state.accessToken = '';
    delete api.defaults.headers.common.Authorization;
    Cookies.remove('accessToken');
  },
  [DESTROY_USER_INFO](state) {
    state.userInfo = null;
  },
  [FETCH_CODEGROUP_LIST](state, codeGroups) {
    state.codeGroups = codeGroups;
  },
  [FETCH_CODEGROUP](state, codeGroup) {
    state.codeGroup = codeGroup;
  },
};
