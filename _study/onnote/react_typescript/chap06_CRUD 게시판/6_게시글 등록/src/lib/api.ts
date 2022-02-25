import axios from 'axios';

export const registerBoardApi = (title: string, content: string, writer: string) =>
  axios.post('/boards', { title, content, writer });
