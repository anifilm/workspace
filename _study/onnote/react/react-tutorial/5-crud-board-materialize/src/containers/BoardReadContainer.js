import React, { useState, useEffect } from 'react';
import { withRouter } from 'react-router';
import * as client from '../lib/api';

import BoardRead from '../components/BoardRead';

// match 객체의 params 값을 참조
const BoardReadContainer = ({ match, history }) => {
  // match 객체의 params 속성값을 참조
  const { boardNo } = match.params;
  // 컴포넌트 상태 선언
  const [board, setBoard] = useState(null);
  const [isLoading, setLoading] = useState(false);

  // 게시글 상세 조회
  const readBoard = async (boardNo) => {
    setLoading(true);
    try {
      const response = await client.fetchBoardApi(boardNo);
      setBoard(response.data);
      setLoading(false);
    } catch (err) {
      throw err;
    }
  };
  // 마운트될 때 게시글 상세정보를 가져옴
  useEffect(() => {
    readBoard(boardNo);
  }, [boardNo]);

  // 삭제 처리 함수 정의
  const onRemove = async () => {
    //console.log('boardNo:', boardNo);
    try {
      // 게시글 삭제 API 호출
      await client.removeBoardApi(boardNo);
      alert('삭제되었습니다.');
      // 목록 화면으로 이동
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
