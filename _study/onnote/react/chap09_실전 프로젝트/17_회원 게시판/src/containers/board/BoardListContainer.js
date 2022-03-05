import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';

import BoardList from 'components/board/BoardList';
import { FETCH_LIST, fetchList } from 'modules/board';
import { isMember as hasRoleMember } from 'modules/selector';

const BoardListContainer = () => {
  // 스토어 상태 조회
  const { boards, isMember, isLoading } = useSelector((state) => ({
    boards: state.board.boards,
    isMember: hasRoleMember(state),
    isLoading: state.loading[FETCH_LIST],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 게시글 목록을 가져옴
  useEffect(() => {
    dispatch(fetchList());
  }, [dispatch]);

  // BoardList 컴포넌트 표시
  return <BoardList boards={boards} isMember={isMember} isLoading={isLoading} />;
};

export default BoardListContainer;
