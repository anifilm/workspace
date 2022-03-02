export default {
  // 로그인 여부 확인
  isAuthorized(state) {
    //console.log('로그인 여부 확인', state);
    return state.accessToken.length > 0 && !!state.userInfo;
  },
  // 로그인한 사용자가 관리자 권한을 가지고 있는지 확인
  isAdmin(state, getters) {
    //console.log('관리자 권한 확인', getters.isAuthorized);
    //console.log('관리자 권한 확인', state);
    return getters.isAuthorized && state.userInfo.authList[0].auth === 'ROLE_ADMIN';
  },
  // 로그인한 사용자가 회원 권한을 가지고 있는지 확인
  isMember(state, getters) {
    //console.log('회원 권한 확인', getters.isAuthorized);
    //console.log('회원 권한 확인', state);
    return getters.isAuthorized && state.userInfo.authList[0].auth === 'ROLE_MEMBER';
  },
}
