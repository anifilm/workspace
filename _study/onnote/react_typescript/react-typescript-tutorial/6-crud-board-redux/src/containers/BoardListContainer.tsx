import React, { useEffect, useCallback } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import {
  fetchListSuccess,
  fetchListFailure,
} from '../modules/board';
import {
  startLoading,
  endLoading,
} from '../modules/loading';
import * as client from '../lib/api';
import { RootState } from '../modules';

import BoardList from '../components/BoardList';

const BoardListContainer = () => {
  // 스토어 상태 조회
  const { boards, isLoading } = useSelector(({ board, loading }: RootState) => ({
    boards: board.boards,
    isLoading: loading.FETCH_LIST,
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 게시글 목록 조회
  const listBoard = useCallback(async () => {
    dispatch(startLoading('FETCH_LIST'));
    try {
      const response = await client.fetchBoardListApi();
      dispatch(fetchListSuccess(response.data));
      dispatch(endLoading('FETCH_LIST'));
    } catch (err) {
      dispatch(fetchListFailure(err));
      dispatch(endLoading('FETCH_LIST'));
      throw err;
    }
  }, [dispatch]);

  useEffect(() => {
    listBoard();
  }, [listBoard]);

  return <BoardList boards={boards} isLoading={isLoading} />;
};

export default BoardListContainer;
