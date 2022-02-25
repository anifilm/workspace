import React, { useEffect, useCallback } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import {
  //fetchListStart,
  fetchListSuccess,
  fetchListFailure,
} from '../modules/board';
import {
  startLoading,
  endLoading,
} from '../modules/loading';
import * as client from '../lib/api';

import BoardList from '../components/BoardList';

const BoardListContainer = () => {
  // 스토어 상태 조회
  const { boards, isLoading } = useSelector(({ board, loading }) => ({
    boards: board.boards,
    isLoading: loading.FETCH_LIST,
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 게시글 목록 조회
  const listBoard = useCallback(async () => {
    dispatch(startLoading('FETCH_LIST'));
    try {
      const response = await client.fetchBoardList();
      dispatch(fetchListSuccess(response.data));
      dispatch(endLoading('FETCH_LIST'));
    } catch (err) {
      dispatch(fetchListFailure(err));
      dispatch(endLoading('FETCH_LIST'));
      throw err;
    }
  }, [dispatch]);

  // 마운트될 때 게시글 목록을 가져옴
  useEffect(() => {
    listBoard();
  }, [listBoard]);

  // BoardList 컴포넌트 표시
  return <BoardList boards={boards} isLoading={isLoading} />;
};

export default BoardListContainer;
