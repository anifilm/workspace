import React, { useState, useEffect } from 'react';
import { RouteComponentProps } from 'react-router-dom';
import * as client from '../lib/api';
import { Board } from '../App';

import BoardRead from '../components/BoardRead';

interface MatchParams {
  boardNo: string;
}

const BoardReadContainer = ({ match }: RouteComponentProps<MatchParams>) => {
  const { boardNo } = match.params;

  const [board, setBoard] = useState<Board>();
  const [isLoading, setLoading] = useState(false);

  const readBoard = async (boardNo: string) => {
    setLoading(true);
    try {
      const response = await client.fetchBoardApi(boardNo);
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

  return <BoardRead boardNo={boardNo} board={board} isLoading={isLoading} />;
};

export default BoardReadContainer;
