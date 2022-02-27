import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';
import { Board } from '../App';

interface Props {
  readonly board?: Board;
  readonly isLoading: boolean;
  readonly onModify: (boardNo: string, title: string, content: string) => void;
}

function BoardModifyForm({ board, isLoading, onModify }: Props) {
  const [title, setTitle] = useState('');
  const [content, setContent] = useState('');

  const handleChangeTitle = (e: React.ChangeEvent<HTMLInputElement>) => {
    setTitle(e.target.value);
  };
  const handleChangeContent = (e: React.ChangeEvent<HTMLTextAreaElement>) => {
    setContent(e.target.value);
  };

  // 폼 submit 이벤트 처리
  const handleSubmit = (e: React.FormEvent<HTMLFormElement>) => {
    e.preventDefault();
    if (!!board) {
      onModify(board.boardNo, title, content);
    }
  };

  useEffect(() => {
    //console.log('useEffect board:', board);
    if (board) {
      //console.log('board.title:', board.title);
      //console.log('board.content:', board.content);
      setTitle(board.title);
      setContent(board.content);
    }
  }, [board]);

  return (
    <div className="container">
      <h3>작성글 수정</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && board && (
        <div className="row">
          <form onSubmit={handleSubmit} className="col s12">
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
                <input
                  type="text"
                  id="title"
                  value={title}
                  onChange={handleChangeTitle}
                  required
                />
                <label className="active" htmlFor="title">제목</label>
              </div>
            </div>
            <div className="row">
              <div className="input-field col s12">
                <textarea
                  id="textarea"
                  className="materialize-textarea"
                  value={content}
                  onChange={handleChangeContent}
                  style={{ height: 200 }}
                  required
                ></textarea>
                <label className="active" htmlFor="textarea">내용</label>
              </div>
            </div>
            <br />
            <Link to={`/read/${board.boardNo}`} className="waves-effect waves-light btn">취소</Link>{' '}
            <button type="submit" className="waves-effect waves-light btn blue">완료</button>
          </form>
        </div>
      )}
    </div>
  );
}

export default BoardModifyForm;
