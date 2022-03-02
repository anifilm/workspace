import api from '../api';
import Cookies from 'js-cookie';
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
  [FETCH_CODEDETAIL_LIST](state, codeDetails) {
    state.codeDetails = codeDetails;
  },
  [FETCH_CODEDETAIL](state, codeDetail) {
    state.codeDetail = codeDetail;
  },
  [FETCH_JOBCODE_LIST](state, jobCodes) {
    state.jobCodes = jobCodes;
  },
  [FETCH_MEMBER_LIST](state, members) {
    state.members = members;
  },
  [FETCH_MEMBER](state, member) {
    state.member = member;
  },
};
