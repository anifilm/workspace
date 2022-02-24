import React, { useEffect, useCallback } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import {
  fetchListStart,
  fetchListSuccess,
  fetchListFailure,
} from '../modules/board';
import * as client from '../lib/api';
import { BoardState } from '../modules/board';

import BoardList from '../components/BoardList';

const BoardListContainer = () => {
  // 스토어 상태 조회
  const { boards, isLoading } = useSelector((state: BoardState) => ({
    boards: state.boards,
    isLoading: state.loading.FETCH_LIST,
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 게시글 목록 조회
  const listBoard = useCallback(async () => {
    dispatch(fetchListStart());
    try {
      const response = await client.fetchBoardList();
      dispatch(fetchListSuccess(response.data));
    } catch (err) {
      dispatch(fetchListFailure(err));
      throw err;
    }
  }, [dispatch]);

  useEffect(() => {
    listBoard();
  }, [listBoard]);

  return <BoardList boards={boards} isLoading={isLoading} />;
};

export default BoardListContainer;
