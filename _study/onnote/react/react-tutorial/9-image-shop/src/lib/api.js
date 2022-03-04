import client from './client';

// 최초관리자 등록 API 호출 함수
export const adminSetup = (userId, userPw, userName) =>
  client.post('/users/setup', { userId, userPw, userName });
