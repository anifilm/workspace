import axios from 'axios';

export const registerBoardApi = (title: string, content: string, writer: string) =>
  axios.post('/boards', { title, content, writer });
export const fetchBoardListApi = () =>
  axios.get('/boards');
export const fetchBoardApi = (boardNo: string) =>
  axios.get(`/boards/${boardNo}`);
