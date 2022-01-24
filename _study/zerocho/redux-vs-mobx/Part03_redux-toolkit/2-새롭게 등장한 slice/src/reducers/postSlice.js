import { createSlice } from '@reduxjs/toolkit';
import { addPost } from '../actions/post';

const initialState = {
  list: [],
};

const postSlice = createSlice({
  name: 'post',
  initialState,
  reducers: {},
  extraReducers: (builder) => builder
    .addCase(addPost.pending, (state, action) => {

    })
    .addCase(addPost.fulfilled, (state, action) => {
      state.list.push(action.payload);
    })
    .addCase(addPost.rejected, (state, action) => {

    }),
});

export default postSlice;
