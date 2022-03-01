import axios from 'axios';

export const fetchItemApi = (itemId: string) => axios.get(`/items/${itemId}`);
