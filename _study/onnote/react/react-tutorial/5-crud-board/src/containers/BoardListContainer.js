import React, { useState, useEffect } from 'react';
import * as client from '../lib/api';

import BoardList from '../components/BoardList';

const BoardListContainer = () => {
  // 컴포넌트 상태 선언
  const [boards, setBoards] = useState([]);
  const [isLoading, setLoading] = useState(false);

  // 게시글 목록 조회
  const listBoard = async () => {
    setLoading(true);
    try {
      const response = await client.fetchBoardList();
      setBoards(response.data);
      setLoading(false);
    } catch (err) {
      setLoading(false);
      throw err;
    }
  };
  // 마운트될 때 게시글 목록을 가져옴
  useEffect(() => {
    listBoard();
  }, []);

  // BoardList 컴포넌트 표시
  return <BoardList boards={boards} isLoading={isLoading} />;
};

export default BoardListContainer;
