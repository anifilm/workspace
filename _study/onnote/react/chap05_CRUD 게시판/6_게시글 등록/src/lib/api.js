import axios from 'axios';

export const registerBoardApi = (title, content, writer) =>
  axios.post('/boards', { title, content, writer });
