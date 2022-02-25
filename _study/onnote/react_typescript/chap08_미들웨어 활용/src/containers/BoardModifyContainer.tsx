import React, { useEffect } from 'react';
import { withRouter, RouteComponentProps } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';
import {
  readBoardThunk,
} from '../modules/board';
import * as client from '../lib/api';
import { BoardState } from '../modules/board';

import BoardModifyForm from '../components/BoardModifyForm';

interface MatchParams {
  boardNo: string;
}

const BoardModifyContainer = ({ match, history }: RouteComponentProps<MatchParams>) => {
  const { boardNo } = match.params;

  // 스토어 상태 조회
  const { board, isLoading } = useSelector((state: BoardState) => ({
    board: state.board,
    isLoading: state.loading.FETCH,
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  useEffect(() => {
    dispatch(readBoardThunk(boardNo));
  }, [dispatch, boardNo]);

  const onModify = async (boardNo: string, title: string, content: string) => {
    try {
      await client.modifyBoardApi(boardNo, title, content);
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
      onModify={onModify}
    />
  );
};

export default withRouter(BoardModifyContainer);
