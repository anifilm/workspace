import axios from 'axios';

export const registerBoard = (title, content, writer) =>
  axios.post('/boards', { title, content, writer });
export const fetchBoardList = () =>
  axios.get('/boards');
export const fetchBoard = (boardNo) =>
  axios.get(`/boards/${boardNo}`);
export const removeBoard = (boardNo) =>
  axios.delete(`/boards/${boardNo}`);
export const modifyBoard = (boardNo, title, content) =>
  axios.put(`/boards/${boardNo}`, { title, content });
