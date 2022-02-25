import axios from 'axios';

export const registerBoardApi = (title, content, writer) =>
  axios.post('/boards', { title, content, writer });
export const fetchBoardApi = (boardNo) =>
  axios.get(`/boards/${boardNo}`);
