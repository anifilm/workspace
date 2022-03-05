import client from './client';

// 최초관리자 등록 API 호출 함수
export const adminSetup = (userId, userPw, userName) =>
  client.post('/users/setup', { userId, userPw, userName });
// 회원가입 API 호출 함수
export const signUp = (userId, userPw, userName, job) =>
  client.post('/users', { userId, userPw, userName, job });
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
// 코드정보 관리 API 호출 함수
export const fetchCodeDetailList = () => client.get('/codedetails');
export const fetchCodeDetail = ({ groupCode, codeValue }) =>
  client.get(`/codedetails/${groupCode}/${codeValue}`);
export const writeCodeDetail = (groupCode, codeValue, codeName) =>
  client.post('/codedetails', { groupCode, codeValue, codeName });
export const modifyCodeDetail = (groupCode, codeValue, codeName) =>
  client.put(`/codedetails/${groupCode}/${codeValue}`, { codeValue, codeName });
export const removeCodeDetail = (groupCode, codeValue) =>
  client.delete(`/codedetails/${groupCode}/${codeValue}`);
// 그룹코드 목록 조회 API 호출 함수
export const fetchGroupCodeList = () => client.get('/codes/codeGroup');
// 직업코드 목록 조회 API 호출 함수
export const fetchJobCodeList = () => client.get('/codes/job');
// 회원정보 관리 API 호출 함수
export const fetchMemberList = () => client.get('/users');
export const fetchMember = (userNo) =>
  client.get(`/users/${userNo}`);
export const writeMember = (userNo, userPw, userName, job) =>
  client.post('/users', { userNo, userPw, userName, job });
export const modifyMember = (userNo, payload) =>
  client.put(`/users/${userNo}`, { payload });
export const removeMember = (userNo) =>
  client.delete(`/users/${userNo}`);
// 회원 게시판 API 호출 함수
export const fetchBoardList = () => client.get('/boards');
export const fetchBoard = (boardNo) =>
  client.get(`/boards/${boardNo}`);
export const writeBoard = (title, content) =>
  client.post('/boards', { title, content });
export const modifyBoard = (boardNo, title, content, writer) =>
  client.put(`/boards/${boardNo}`, { title, content, writer });
export const removeBoard = (boardNo, writer) =>
  client.delete(`/boards/${boardNo}?writer=${writer}`);
