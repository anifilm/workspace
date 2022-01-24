import { createSlice } from '@reduxjs/toolkit';
import { logIn } from '../actions/user';

const initialState = {
  isLoggingIn: false,
  data: null,
};

const userReducer = createSlice({
  name: 'user',
  initialState,
  reducers: {
    logOut(state, action) {
      state.data = null;
    },
  },
  extraReducers: (builder) => builder
    .addCase(logIn.pending, (state, action) => {
      state.isLoggingIn = true;
      state.data = null;
    })
    .addCase(logIn.fulfilled, (state, action) => {
      state.isLoggingIn = false;
      state.data = action.payload;
    })
    .addCase(logIn.rejected, (state, action) => {
      state.error = action.payload;
    }),
});

export default userReducer;
