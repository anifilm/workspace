import React from 'react';
import { Link } from 'react-router-dom';
import { Board } from '../App';

interface Props {
  readonly boardNo: string;
  readonly board?: Board;
  readonly isLoading: boolean;
  readonly onRemove: () => void;
}

function BoardRead({ boardNo, board, isLoading, onRemove }: Props) {
  return (
    <div className="container">
      <h3>작성글 상세보기</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && board && (
        <div className="row">
          <div className="col s12">
            <div className="row">
              <div className="input-field col s4">
                <input type="text" id="boardNo" value={board.boardNo} disabled />
                <label className="active" htmlFor="boardNo">번호</label>
              </div>
              <div className="input-field col s4">
                <input type="text" id="writer" value={board.writer} disabled />
                <label className="active" htmlFor="writer">글쓴이</label>
              </div>
              <div className="input-field col s4">
                <input type="text" id="regDate" value={board.regDate} disabled />
                <label className="active" htmlFor="regDate">작성일자</label>
              </div>
              <div className="input-field col s12">
                <input type="text" id="title" value={board.title} readOnly />
                <label className="active" htmlFor="title">제목</label>
              </div>
            </div>
            <div className="row">
              <div className="input-field col s12">
                <textarea
                  id="textarea"
                  className="materialize-textarea"
                  value={board.content}
                  readOnly
                  style={{ height: 200 }}
                ></textarea>
                <label className="active" htmlFor="textarea">내용</label>
              </div>
            </div>
          </div>
          <br />
          <Link to="/" className="waves-effect waves-light btn">
            글 목록
          </Link>{' '}
          <Link to={`/edit/${boardNo}`} className="waves-effect waves-light btn blue">수정</Link>{' '}
          <button onClick={onRemove} className="waves-effect waves-light btn red right">삭제</button>
        </div>
      )}
    </div>
  );
}

export default BoardRead;
