import React, { useEffect, useCallback } from 'react';
import { withRouter } from 'react-router';
import { useDispatch, useSelector } from 'react-redux';
import BoardRead from '../components/BoardRead';
import {
  //fetchStart,
  fetchSuccess,
  fetchFailure,
} from '../modules/board';
import { startLoading, endLoading } from '../modules/loading';
import { fetchBoardApi, removeBoardApi } from '../lib/api';

// match 객체의 params 값을 참조
const BoardReadContainer = ({ match, history }) => {
  // match 객체의 params 속성값을 참조
  const { boardNo } = match.params;

  // 스토어 dispatch 사용
  const dispatch = useDispatch();
  // 스토어 상태 조회
  const { board, isLoading } = useSelector(({ board, loading }) => {
    return {
      board: board.board,
      isLoading: loading.FETCH,
    };
  });

  // 게시글 상세 조회
  const readBoard = useCallback(async (boardNo) => {
    //dispatch(fetchStart());
    dispatch(startLoading('FETCH'));
    try {
      const response = await fetchBoardApi(boardNo);
      dispatch(fetchSuccess(response.data));
      dispatch(endLoading('FETCH'));
    } catch (e) {
      dispatch(fetchFailure(e));
      dispatch(endLoading('FETCH'));
      throw e;
    }
  }, [dispatch]);

  // 삭제 처리 함수 정의
  const onRemove = async () => {
    //console.log('boardNo:', boardNo);
    try {
      // 게시글 삭제 API 호출
      await removeBoardApi(boardNo);
      alert('삭제되었습니다.');
      // 목록 화면으로 이동
      history.push('/');
    } catch (e) {
      console.log(e);
    }
  };

  // 마운트될 때 게시글 상세정보를 가져옴
  useEffect(() => {
    readBoard(boardNo);
  }, [boardNo, readBoard]);

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