import React from 'react';
import { Link } from 'react-router-dom';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const BoardRead = ({ boardNo, board, userInfo, isLoading, onRemove }) => {
  // 게시글 소유자 확인
  let isOwn = false;
  if (userInfo && board) {
    if (userInfo.userId === board.writer) {
      isOwn = true;
    }
  }
  // 관리자여부 확인
  let isAdmin = false;
  if (userInfo && userInfo.authList[0].auth === 'ROLE_ADMIN') {
    isAdmin = true;
  }

  return (
    <div className="container">
      <h3 style={{ marginBottom: '40px' }}>작성글 상세보기</h3>
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
                <input type="text" id="board-no" value={board.boardNo} disabled />
                <label className="active" htmlFor="board-no">번호</label>
              </div>
              <div className="input-field col s4">
                <input type="text" id="writer" value={board.writer} disabled />
                <label className="active" htmlFor="writer">글쓴이</label>
              </div>
              <div className="input-field col s4">
                <input type="text" id="reg-date" value={board.regDate} disabled />
                <label className="active" htmlFor="reg-date">작성일자</label>
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
          <Link to="/board" className="waves-effect waves-light btn">
            글 목록
          </Link>{' '}
          {isOwn && (
            <>
              <Link to={`/board/edit/${boardNo}`} className="waves-effect waves-light btn blue">수정</Link>
              <button onClick={onRemove} className="waves-effect waves-light btn red right">삭제</button>
            </>
          )}
          {isAdmin && (
            <button onClick={onRemove} className="waves-effect waves-light btn red right">삭제</button>
          )}
        </div>
      )}
    </div>
  );
};

export default BoardRead;
