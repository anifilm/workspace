import React, { useState, useEffect } from 'react';
import * as client from '../lib/api';

import BoardRead from '../components/BoardRead';

// match 객체의 params 값을 참조
const BoardReadContainer = ({ match }) => {
  // match 객체의 params 속성값을 참조
  const { boardNo } = match.params;
  // 컴포넌트 상태 선언
  const [board, setBoard] = useState(null);
  const [isLoading, setLoading] = useState(false);

  // 게시글 상세 조회
  const readBoard = async (boardNo) => {
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
  // 마운트될 때 게시글 상세정보를 가져옴
  useEffect(() => {
    readBoard(boardNo);
  }, [boardNo]);

  // BoardRead 컴포넌트 표시
  return <BoardRead boardNo={boardNo} board={board} isLoading={isLoading} />;
};

export default BoardReadContainer;
