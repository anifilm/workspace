import axios from 'axios';

const instance = axios.create({
  baseURL: process.env.VUE_APP_API_URL
});

export const registerUser = function (userData) {
  return instance.post('signup', userData);
};
