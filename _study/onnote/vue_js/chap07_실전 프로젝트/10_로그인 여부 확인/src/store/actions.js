import api from '../api';
import {
  SET_ACCESS_TOKEN,
  SET_USER_INFO,
} from './mutation-types';

export default {
  signin({ commit }, payload) {
    return api
      .post(
        `/api/authenticate?username=${payload.userId}&password=${payload.password}`,
        {
          username: payload.userId,
          password: payload.password,
        },
      )
      .then((res) => {
        const { authorization } = res.headers;
        const accessToken = authorization.substring(7);
        commit(SET_ACCESS_TOKEN, accessToken);
        // 사용자 정보 요청
        return api.get('/users/myinfo');
      })
      .then((res) => {
        commit(SET_USER_INFO, res.data);
      });
  },
};
