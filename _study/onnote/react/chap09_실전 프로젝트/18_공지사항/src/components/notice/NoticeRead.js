import React from 'react';
import { Link } from 'react-router-dom';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const NoticeRead = ({ noticeNo, notice, isAdmin, isLoading, onRemove }) => {
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>공지사항 상세보기</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && notice && (
        <div className="row">
          <div className="col s12">
            <div className="row">
              <div className="input-field col s6">
                <input type="text" id="notice-no" value={notice.noticeNo} disabled />
                <label className="active" htmlFor="notice-no">번호</label>
              </div>
              <div className="input-field col s6">
                <input type="text" id="reg-date" value={notice.regDate} disabled />
                <label className="active" htmlFor="reg-date">등록일시</label>
              </div>
              <div className="input-field col s12">
                <input type="text" id="title" value={notice.title} readOnly />
                <label className="active" htmlFor="title">제목</label>
              </div>
            </div>
            <div className="row">
              <div className="input-field col s12">
                <textarea
                  id="textarea"
                  className="materialize-textarea"
                  value={notice.content}
                  readOnly
                  style={{ height: 200 }}
                ></textarea>
                <label className="active" htmlFor="textarea">내용</label>
              </div>
            </div>
          </div>
          <br />
          <Link to="/notice" className="waves-effect waves-light btn">
            공지 목록
          </Link>{' '}
          {isAdmin && (
            <>
              <Link to={`/notice/edit/${noticeNo}`} className="waves-effect waves-light btn blue">수정</Link>
              <button onClick={onRemove} className="waves-effect waves-light btn red right">삭제</button>
            </>
          )}
        </div>
      )}
    </div>
  );
};

export default NoticeRead;
