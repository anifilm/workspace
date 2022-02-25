import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import {
  listBoardThunk,
} from '../modules/board';
import { BoardState } from '../modules/board';

import BoardList from '../components/BoardList';

const BoardListContainer = () => {
  // 스토어 상태 조회
  const { boards, isLoading } = useSelector((state: BoardState) => ({
    boards: state.boards,
    isLoading: state.loading.FETCH_LIST,
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  useEffect(() => {
    dispatch(listBoardThunk());
  }, [dispatch]);

  return <BoardList boards={boards} isLoading={isLoading} />;
};

export default BoardListContainer;
