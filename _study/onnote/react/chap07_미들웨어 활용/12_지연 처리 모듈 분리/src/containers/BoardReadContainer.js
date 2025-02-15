import React, { useEffect } from 'react';
import { withRouter } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';
import {
  readBoardThunk,
} from '../modules/board';
import * as client from '../lib/api';

import BoardRead from '../components/BoardRead';

// match 객체의 params 값을 참조
const BoardReadContainer = ({ match, history }) => {
  // match 객체의 params 속성값을 참조
  const { boardNo } = match.params;

  // 스토어 상태 조회
  const { board, isLoading } = useSelector(({ board, loading }) => ({
    board: board.board,
    isLoading: loading.FETCH,
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 마운트될 때 게시글 상세정보를 가져옴
  useEffect(() => {
    dispatch(readBoardThunk(boardNo));
  }, [dispatch, boardNo]);

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

  // BoardRead 컴포넌트 표시
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
