import axios from 'axios';

export const registerBoard = (title: string, content: string, writer: string) =>
  axios.post('/boards', { title, content, writer });
export const fetchBoardList = () =>
  axios.get('/boards');
export const fetchBoard = (boardNo: string) =>
  axios.get(`/boards/${boardNo}`);
export const removeBoard = (boardNo: string) =>
  axios.delete(`/boards/${boardNo}`);
