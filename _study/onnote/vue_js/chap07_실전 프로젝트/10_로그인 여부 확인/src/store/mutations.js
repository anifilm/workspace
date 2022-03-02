import api from '../api';
import {
  SET_ACCESS_TOKEN,
  SET_USER_INFO,
} from './mutation-types';

export default {
  [SET_ACCESS_TOKEN](state, accessToken) {
    if (accessToken) {
      state.accessToken = accessToken;
      api.defaults.headers.common.Authorization = `Bearer ${accessToken}`;
    }
  },
  [SET_USER_INFO](state, userInfo) {
    if (userInfo) {
      state.userInfo = userInfo;
    }
  },
};
