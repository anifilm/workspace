import React, { useEffect, useCallback } from 'react';
import { withRouter } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';
import {
  //fetchStart,
  fetchSuccess,
  fetchFailure,
  changeTitle,
  changeContent,
} from '../modules/board';
import {
  startLoading,
  endLoading,
} from '../modules/loading';
import * as client from '../lib/api';

import BoardModifyForm from '../components/BoardModifyForm';

// match, history 객체를 전달받음
const BoardModifyContainer = ({ match, history }) => {
  // match 객체의 params 속성값을 참조
  const { boardNo } = match.params;

  // 스토어 상태 조회
  const { board, isLoading } = useSelector(({ board, loading }) => ({
    board: board.board,
    isLoading: loading.FETCH,
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 게시글 상세 조회
  const readBoard = useCallback(async (boardNo) => {
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

  // 마운트될 때 게시글 상세정보를 가져옴
  useEffect(() => {
    readBoard(boardNo);
  }, [boardNo, readBoard]);

  // 제목 변경 함수
  const onChangeTitle = useCallback((title) => {
    return dispatch(changeTitle(title));
  }, [dispatch]);

  // 내용 변경 함수
  const onChangeContent = useCallback((content) => {
    return dispatch(changeContent(content));
  }, [dispatch]);

  // 수정 처리 함수 정의
  const onModify = async (boardNo, title, content) => {
    try {
      await client.modifyBoardApi(boardNo, title, content);
      alert('수정되었습니다.');
      history.push('/read/' + boardNo);
    } catch (err) {
      console.log(err);
    }
  }

  // BoardModifyForm 컴포넌트 표시
  return (
    <BoardModifyForm
      board={board}
      isLoading={isLoading}
      onChangeTitle={onChangeTitle}
      onChangeContent={onChangeContent}
      onModify={onModify}
    />
  );
};

// withRouter 함수를 사용하여 history 객체에 접근
export default withRouter(BoardModifyContainer);
