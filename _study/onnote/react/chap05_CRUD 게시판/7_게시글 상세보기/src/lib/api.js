import axios from 'axios';

export const registerBoard = (title, content, writer) =>
  axios.post('/boards', { title, content, writer });
export const fetchBoard = (boardNo) =>
  axios.get(`/boards/${boardNo}`);
