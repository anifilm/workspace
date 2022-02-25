import axios from 'axios';

export const registerBoardApi = (title, content, writer) =>
  axios.post('/boards', { title, content, writer });
export const fetchBoardListApi = () =>
  axios.get('/boards');
export const fetchBoardApi = (boardNo) =>
  axios.get(`/boards/${boardNo}`);
export const removeBoardApi = (boardNo) =>
  axios.delete(`/boards/${boardNo}`);
