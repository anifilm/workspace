import axios from 'axios';

export const fetchItemListApi = () => axios.get('/items');
export const fetchItemApi = (itemId: string) => axios.get(`/items/${itemId}`);
export const removeItemApi = (itemId: string) => axios.delete(`/items/${itemId}`);
