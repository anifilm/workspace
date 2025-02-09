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
  FETCH_JOBCODE_LIST,
  FETCH_MEMBER_LIST,
  FETCH_MEMBER,
  FETCH_BOARD_LIST,
  FETCH_BOARD,
  FETCH_NOTICE_LIST,
  FETCH_NOTICE,
  FETCH_ITEM_LIST,
  FETCH_ITEM,
  FETCH_CHARGECOIN_LIST,
  FETCH_PAYCOIN_LIST,
  FETCH_USERITEM_LIST,
  FETCH_USERITEM,
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
  fetchJobCodeList({ commit }) {
    return api.get('/codes/job')
      .then((res) => {
        commit(FETCH_JOBCODE_LIST, res.data);
      });
  },
  fetchMemberList({ commit }) {
    return api.get('/users')
      .then((res) => {
        commit(FETCH_MEMBER_LIST, res.data);
      });
  },
  fetchMember({ commit }, userNo) {
    return api.get(`/users/${userNo}`)
      .then((res) => {
        commit(FETCH_MEMBER, res.data);
      });
  },
  fetchBoardList({ commit }) {
    return api.get('/boards')
      .then((res) => {
        commit(FETCH_BOARD_LIST, res.data);
      });
  },
  fetchBoard({ commit }, boardNo) {
    return api.get(`/boards/${boardNo}`)
      .then((res) => {
        commit(FETCH_BOARD, res.data);
      });
  },
  fetchNoticeList({ commit }) {
    return api.get('/notices')
      .then((res) => {
        commit(FETCH_NOTICE_LIST, res.data);
      });
  },
  fetchNotice({ commit }, noticeNo) {
    return api.get(`/notices/${noticeNo}`)
      .then((res) => {
        commit(FETCH_NOTICE, res.data);
      });
  },
  fetchItemList({ commit }) {
    return api.get('/items')
      .then((res) => {
        commit(FETCH_ITEM_LIST, res.data);
      });
  },
  fetchItem({ commit }, itemId) {
    return api.get(`/items/${itemId}`)
      .then((res) => {
        commit(FETCH_ITEM, res.data);
      });
  },
  fetchChargeCoinList({ commit }) {
    return api.get('/coins')
      .then((res) => {
        commit(FETCH_CHARGECOIN_LIST, res.data);
      });
  },
  fetchPayCoinList({ commit }) {
    return api.get('/coins/pay')
      .then((res) => {
        commit(FETCH_PAYCOIN_LIST, res.data);
      });
  },
  fetchUserItemList({ commit }) {
    return api.get('/useritems')
      .then((res) => {
        commit(FETCH_USERITEM_LIST, res.data);
      });
  },
  fetchUserItem({ commit }, userItemNo) {
    return api.get(`/useritems/${userItemNo}`)
      .then((res) => {
        commit(FETCH_USERITEM, res.data);
      });
  },
};
