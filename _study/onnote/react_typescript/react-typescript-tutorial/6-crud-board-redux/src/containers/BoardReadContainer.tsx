import React, { useEffect, useCallback } from 'react';
import { withRouter, RouteComponentProps } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';
import {
  fetchSuccess,
  fetchFailure,
} from '../modules/board';
import {
  startLoading,
  endLoading,
} from '../modules/loading';
import * as client from '../lib/api';
import { RootState } from '../modules';

import BoardRead from '../components/BoardRead';

interface MatchParams {
  boardNo: string;
}

const BoardReadContainer = ({ match, history }: RouteComponentProps<MatchParams>) => {
  const { boardNo } = match.params;
  // 스토어 상태 조회
  const { board, isLoading } = useSelector(({ board, loading }: RootState) => ({
    board: board.board,
    isLoading: loading.FETCH,
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 게시글 상세 조회
  const readBoard = useCallback(async (boardNo: string) => {
    dispatch(startLoading('FETCH'));
    try {
      const response = await client.fetchBoardApi(boardNo);
      dispatch(fetchSuccess(response.data));
      dispatch(endLoading('FETCH'));
    } catch (err) {
      dispatch(fetchFailure(err));
      dispatch(endLoading('FETCH'));
      throw err;
    }
  }, [dispatch]);

  useEffect(() => {
    readBoard(boardNo);
  }, [boardNo, readBoard]);

  const onRemove = async () => {
    //console.log('boardNo:', boardNo);
    try {
      await client.removeBoardApi(boardNo);
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
