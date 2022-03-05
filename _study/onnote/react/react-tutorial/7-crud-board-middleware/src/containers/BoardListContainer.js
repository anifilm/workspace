import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import {
  listBoardThunk,
} from '../modules/board';

import BoardList from '../components/BoardList';

const BoardListContainer = () => {
  // 스토어 상태 조회
  const { boards, isLoading } = useSelector(({ board, loading }) => ({
    boards: board.boards,
    isLoading: loading.FETCH_LIST,
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 게시글 목록을 가져옴
  useEffect(() => {
    dispatch(listBoardThunk());
  }, [dispatch]);

  // BoardList 컴포넌트 표시
  return <BoardList boards={boards} isLoading={isLoading} />;
};

export default BoardListContainer;
