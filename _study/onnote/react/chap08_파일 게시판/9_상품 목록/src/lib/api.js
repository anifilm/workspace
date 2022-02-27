import axios from 'axios';

export const fetchItemListApi = () => axios.get('/items');
export const fetchItemApi = (itemId) => axios.get(`/items/${itemId}`);
