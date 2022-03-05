import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';

// 컴포넌트 속성값 수신
const NoticeModifyForm = ({ notice, isLoading, onModify }) => {
  // 컴포넌트 상태 설정
  const [title, setTitle] = useState('');
  const [content, setContent] = useState('');

  // 공지사항 제목의 변경을 처리하는 함수
  const handleChangeTitle = (e) => {
    setTitle(e.target.value);
  };
  // 공지사항 내용의 변경을 처리하는 함수
  const handleChangeContent = (e) => {
    setContent(e.target.value);
  };

  // 폼 submit 이벤트 처리
  const handleSubmit = (e) => {
    e.preventDefault();
    onModify(notice.noticeNo, title, content);
  };

  // 마운트될 때 공지사항 상세정보를 가져옴
  useEffect(() => {
    if (notice) {
      setTitle(notice.title);
      setContent(notice.content);
    }
  }, [notice]);

  // 공지사항 수정 폼 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>공지사항 수정</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && notice && (
        <div className="row">
          <form onSubmit={handleSubmit} className="col s12">
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
            <Link to={`/notice/read/${notice.noticeNo}`} className="waves-effect waves-light btn">취소</Link>{' '}
            <button type="submit" className="waves-effect waves-light btn blue">완료</button>
          </form>
        </div>
      )}
    </div>
  );
}

export default NoticeModifyForm;
