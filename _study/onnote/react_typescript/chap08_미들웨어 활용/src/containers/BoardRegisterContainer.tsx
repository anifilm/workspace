import React from 'react';
import { withRouter, RouteComponentProps } from 'react-router-dom';
import * as client from '../lib/api';

import BoardRegisterForm from '../components/BoardRegisterForm';

const BoardRegisterContainer = ({ history }: RouteComponentProps) => {
  const onRegister = async (title: string, content: string, writer: string) => {
    try {
      const response = await client.registerBoardApi(title, content, writer);
      alert('등록되었습니다.');
      history.push('/read/' + response.data.boardNo);
    }
    catch (err) {
      console.log(err);
    }
  }
  return <BoardRegisterForm onRegister={onRegister} />;
};

export default withRouter(BoardRegisterContainer);
