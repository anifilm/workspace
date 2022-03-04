import { createSelector } from 'reselect';

// 액세스토큰 정보 전달
const getAccessToken = (state) => state.auth.accessToken;
// 사용자정보 정보 전달
const getUserInfo = (state) => state.auth.userInfo;

// 로그인여부 선택자 함수
export const getAuthorized = createSelector(
  [getAccessToken, getUserInfo],
  (accessToken, userInfo) => accessToken.length > 0 && !!userInfo,
);
// 관리자여부 선택자 함수
export const isAdmin = createSelector(
  [getAuthorized, getUserInfo],
  (isAuthorized, userInfo) => isAuthorized && userInfo.authList[0].auth === 'ROLE_ADMIN',
);
// 회원여부 선택자 함수
export const isMember = createSelector(
  [getAuthorized, getUserInfo],
  (isAuthorized, userInfo) => isAuthorized && userInfo.authList[0].auth === 'ROLE_MEMBER',
);
