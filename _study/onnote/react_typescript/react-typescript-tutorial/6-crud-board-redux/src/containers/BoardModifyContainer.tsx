import React, { useEffect, useCallback } from 'react';
import { withRouter, RouteComponentProps } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';
import {
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
import { RootState } from '../modules';

import BoardModifyForm from '../components/BoardModifyForm';

interface MatchParams {
  boardNo: string;
}

const BoardModifyContainer = ({ match, history }: RouteComponentProps<MatchParams>) => {
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
      const response = await client.fetchBoard(boardNo);
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

  // 제목 변경 함수
  const onChangeTitle = useCallback((title) => {
    return dispatch(changeTitle(title));
  }, [dispatch]);

  // 내용 변경 함수
  const onChangeContent = useCallback((content) => {
    return dispatch(changeContent(content));
  }, [dispatch]);

  // 수정 처리
  const onModify = async (boardNo: string, title: string, content: string) => {
    try {
      await client.modifyBoard(boardNo, title, content);
      alert('수정되었습니다.');
      history.push('/read/' + boardNo);
    } catch (err) {
      console.log(err);
    }
  };

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

export default withRouter(BoardModifyContainer);
