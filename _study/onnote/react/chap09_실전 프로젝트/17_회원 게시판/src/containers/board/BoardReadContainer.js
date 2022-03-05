import React, { useEffect } from 'react';
import { withRouter } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';

import BoardRead from 'components/board/BoardRead';
import { FETCH_ONE, fetchOne } from 'modules/board';
import { removeBoard } from 'lib/api';

// match 객체의 params 값을 참조
const BoardReadContainer = ({ boardNo, history }) => {
  // 스토어 상태 조회
  const { board, userInfo, isLoading } = useSelector(({ board, auth, loading }) => ({
    board: board.board,
    userInfo: auth.userInfo,
    isLoading: loading[FETCH_ONE],
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 마운트될 때 게시글 상세정보를 가져옴
  useEffect(() => {
    dispatch(fetchOne(boardNo));
  }, [dispatch, boardNo]);

  // 삭제 처리 함수 정의
  const onRemove = async () => {
    try {
      await removeBoard(boardNo, board.writer);
      alert('삭제가 완료되었습니다.');
      history.push('/');
    } catch (err) {
      if (err.response.status === 400) {
        alert('잘못된 요청입니다.');
      } else if (err.response.status === 401) {
        alert('로그인이 필요합니다.');
        history.push('/signin');
      } else if (err.response.status === 403) {
        alert('접근 권한이 없습니다.');
        history.goBack();
      } else {
        alert(err.response.data.message);
      }
    }
  };

  // BoardRead 컴포넌트 표시
  return (
    <BoardRead
      boardNo={boardNo}
      board={board}
      userInfo={userInfo}
      isLoading={isLoading}
      onRemove={onRemove}
    />
  );
};

export default withRouter(BoardReadContainer);
