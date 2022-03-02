import api from '../api';
import {
  SET_ACCESS_TOKEN,
  SET_USER_INFO,
  DESTROY_ACCESS_TOKEN,
  DESTROY_USER_INFO,
  FETCH_CODEGROUP_LIST,
  FETCH_CODEGROUP,
  FETCH_CODEDETAIL_LIST,
  FETCH_CODEDETAIL,
} from './mutation-types';

export default {
  signin({ commit }, payload) {
    return api
      .post(
        `/api/authenticate?username=${payload.userId}&password=${payload.password}`, {
        username: payload.userId,
        password: payload.password,
      })
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
  // 저장된 토큰을 가지고 로그인 처리 및 로그인한 사용자 정보 획득
  signinByToken({ commit }, token) {
    commit(SET_ACCESS_TOKEN, token);
    return api.get('/users/myinfo')
      .then((res) => {
        //console.log('signinByToken', res);
        commit(SET_USER_INFO, res.data);
      });
  },
  signout({ commit }) {
    commit(DESTROY_USER_INFO);
    commit(DESTROY_ACCESS_TOKEN);
  },
  fetchCodeGroupList({ commit }) {
    return api.get('/codegroups')
      .then((res) => {
        //console.log('/codegroups', res.data);
        commit(FETCH_CODEGROUP_LIST, res.data);
      });
  },
  fetchCodeGroup({ commit }, groupCode) {
    return api.get(`/codegroups/${groupCode}`)
      .then((res) => {
        //console.log(`/codegroups/${groupCode}`, res.data);
        commit(FETCH_CODEGROUP, res.data);
      });
  },
  fetchCodeDetailList({ commit }) {
    return api.get('/codedetails')
      .then((res) => {
        //console.log('/codedetails', res.data);
        commit(FETCH_CODEDETAIL_LIST, res.data);
      });
  },
  fetchCodeDetail({ commit }, payload) {
    const { groupCode, codeValue } = payload;
    return api.get(`/codedetails/${groupCode}/${codeValue}`)
      .then((res) => {
        //console.log(`/codedetails/${groupCode}/${codeValue}`, res.data);
        commit(FETCH_CODEDETAIL, res.data);
      });
  },
};
