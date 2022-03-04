import client from './client';

// 최초관리자 등록 API 호출 함수
export const adminSetup = (userId, userPw, userName) =>
  client.post('/users/setup', { userId, userPw, userName });
// 로그인 API 호출 함수
export const signIn = (userId, userPw) =>
  client.post(`/api/authenticate?username=${userId}&password=${userPw}`);
// 로그인 사용자 정보 수신 API 호출 함수
export const getUserInfo = () => client.get('/users/myinfo');
// 코드그룹 관리 API 호출 함수
export const fetchCodeGroupList = () => client.get('/codegroups');
export const fetchCodeGroup = (groupCode) =>
  client.get(`/codegroups/${groupCode}`);
export const writeCodeGroup = (groupCode, groupName) =>
  client.post('/codegroups', { groupCode, groupName });
export const modifyCodeGroup = (groupCode, groupName) =>
  client.put(`/codegroups/${groupCode}`, { groupName });
export const removeCodeGroup = (groupCode) =>
  client.delete(`/codegroups/${groupCode}`);
