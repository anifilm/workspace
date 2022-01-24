const { createAsyncThunk } = require('@reduxjs/toolkit');

const delay = (time, value) => new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve(value);
  }, time);
});

export const addPost = createAsyncThunk('post/add', async (data, thunkAPI) => {
  return await delay(500, data);
});
