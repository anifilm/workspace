import axios from 'axios';

export const registerBoardApi = (title: string, content: string, writer: string) =>
  axios.post('/boards', { title, content, writer });
export const fetchBoardListApi = () =>
  axios.get('/boards');
export const fetchBoardApi = (boardNo: string) =>
  axios.get(`/boards/${boardNo}`);
export const removeBoardApi = (boardNo: string) =>
  axios.delete(`/boards/${boardNo}`);
export const modifyBoardApi = (boardNo: string, title: string, content: string) =>
  axios.put(`/boards/${boardNo}`, { title, content });
