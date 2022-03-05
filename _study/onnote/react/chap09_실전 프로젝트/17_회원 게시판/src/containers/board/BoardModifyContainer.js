import React, { useEffect } from 'react';
import { withRouter } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';

import BoardModifyForm from 'components/board/BoardModifyForm';
import { FETCH_ONE, fetchOne } from 'modules/board';
import { modifyBoard } from 'lib/api';

// match, history 객체를 전달받음
const BoardModifyContainer = ({ boardNo, history }) => {
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

  // 수정 처리 함수 정의
  const onModify = async (boardNo, title, content, writer) => {
    try {
      await modifyBoard(boardNo, title, content, writer);
      alert('수정이 완료되었습니다.');
      history.push(`/board/read/${boardNo}`);
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
  }

  // BoardModifyForm 컴포넌트 표시
  return (
    <BoardModifyForm
      board={board}
      userInfo={userInfo}
      isLoading={isLoading}
      onModify={onModify}
    />
  );
};

// withRouter 함수를 사용하여 history 객체에 접근
export default withRouter(BoardModifyContainer);
