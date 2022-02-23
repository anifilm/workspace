import React, { useState, useEffect } from 'react';
import { withRouter, RouteComponentProps } from 'react-router-dom';
import * as client from '../lib/api';
import { Board } from '../App';

import BoardRead from '../components/BoardRead';

interface MatchParams {
  boardNo: string;
}

const BoardReadContainer = ({ match, history }: RouteComponentProps<MatchParams>) => {
  const { boardNo } = match.params;

  const [board, setBoard] = useState<Board>();
  const [isLoading, setLoading] = useState(false);

  const readBoard = async (boardNo: string) => {
    setLoading(true);
    try {
      const response = await client.fetchBoard(boardNo);
      setBoard(response.data);
      setLoading(false);
    } catch (err) {
      setLoading(false);
      throw err;
    }
  };

  useEffect(() => {
    readBoard(boardNo);
  }, [boardNo]);

  const onRemove = async () => {
    //console.log('boardNo:', boardNo);
    try {
      await client.removeBoard(boardNo);
      alert('삭제되었습니다.');
      history.push('/');
    } catch (err) {
      console.log(err);
    }
  };

  return (
    <BoardRead
      boardNo={boardNo}
      board={board}
      isLoading={isLoading}
      onRemove={onRemove}
    />
  );
};

export default withRouter(BoardReadContainer);
