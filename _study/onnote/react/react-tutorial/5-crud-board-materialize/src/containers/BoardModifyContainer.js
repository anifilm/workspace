import React, { useState, useEffect } from 'react';
import { withRouter } from 'react-router';
import BoardModifyForm from '../components/BoardModifyForm';
import * as client from '../lib/api';

// match, history 객체를 전달 받음
const BoardModifyContainer = ({ match, history }) => {
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
    } catch (e) {
      throw e;
    }
  };

  // 수정 처리 함수 정의
  const onModify = async (boardNo, title, content) => {
    try {
      await client.modifyBoard(boardNo, title, content);
      alert('수정되었습니다.');
      history.push('/read/' + boardNo);
    } catch (e) {
      console.log(e);
    }
  };

  // 마운트될 때 게시글 상세정보를 가져옴
  useEffect(() => {
    readBoard(boardNo);
  }, [boardNo]);

  return (
    <BoardModifyForm
      board={board}
      isLoading={isLoading}
      onModify={onModify}
    />
  );
};

export default withRouter(BoardModifyContainer);
