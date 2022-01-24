import { createAsyncThunk } from '@reduxjs/toolkit';

const delay = (time, value) => new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve(value);
  }, time);
});

export const logIn = createAsyncThunk('user/logIn', async (data, thunkAPI) => {
  return await delay(2000, {
    userId: 1,
    nickname: 'zerocho',
  });
  // throw new Error('비밀번호가 틀렸습니다.');
});
