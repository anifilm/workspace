import axios from 'axios';

export const registerBoard = (title: string, content: string, writer: string) =>
  axios.post('/boards', { title, content, writer });
