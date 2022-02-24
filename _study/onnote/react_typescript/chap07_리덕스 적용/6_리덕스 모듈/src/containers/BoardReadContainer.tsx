import React, { useEffect, useCallback } from 'react';
import { withRouter, RouteComponentProps } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';
import {
  fetchStart,
  fetchSuccess,
  fetchFailure,
} from '../modules/board';
import * as client from '../lib/api';
import { BoardState } from '../modules/board';

import BoardRead from '../components/BoardRead';

interface MatchParams {
  boardNo: string;
}

const BoardReadContainer = ({ match, history }: RouteComponentProps<MatchParams>) => {
  const { boardNo } = match.params;
  // 스토어 상태 조회
  const { board, isLoading } = useSelector((state: BoardState) => ({
    board: state.board,
    isLoading: state.loading.FETCH,
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 게시글 상세 조회
  const readBoard = useCallback(async (boardNo: string) => {
    dispatch(fetchStart());
    try {
      const response = await client.fetchBoard(boardNo);
      dispatch(fetchSuccess(response.data));
    } catch (err) {
      dispatch(fetchFailure(err));
      throw err;
    }
  }, [dispatch]);

  useEffect(() => {
    readBoard(boardNo);
  }, [boardNo, readBoard]);

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
