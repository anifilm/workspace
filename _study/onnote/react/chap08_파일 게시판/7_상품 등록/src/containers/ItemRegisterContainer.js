import React from 'react';
import { withRouter } from 'react-router-dom';
import axios from 'axios';

import ItemRegisterForm from '../components/ItemRegisterForm';

const ItemRegisterContainer = ({ history }) => {
  const onRegister = (itemName, price, description, file) => {
    const itemObject = {
      itemName,
      price,
      description,
    };

    const formData = new FormData();
    formData.append('file', file);
    formData.append('item', JSON.stringify(itemObject));

    axios
      .post('/items', formData, {
        headers: { 'Content-Type': 'multipart/form-data' },
      })
      .then((res) => {
        alert('등록되었습니다.');
        history.push('/read/' + res.data.itemId);
      })
      .catch((err) => {
        alert(err)
      });
  };

  return <ItemRegisterForm onRegister={onRegister} />;
};

export default withRouter(ItemRegisterContainer);
