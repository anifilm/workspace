import React, { useState, useCallback } from 'react';
import { Link } from 'react-router-dom';

// 등록 처리 함수를 컴포넌트 속성으로 전달 받음
const BoardRegisterForm = ({ onRegister }) => {
  // 컴포넌트 상태 설정
  const [title, setTitle] = useState('');
  const [content, setContent] = useState('');

  // 게시물 제목의 변경을 처리하는 함수
  const handleChangeTitle = useCallback((e) => {
    setTitle(e.target.value);
  }, []);
  // 게시물 내용의 변경을 처리하는 함수
  const handleChangeContent = useCallback((e) => {
    setContent(e.target.value);
  }, []);

  // 폼 submit 이벤트 처리
  const handleSubmit = useCallback((e) => {
    e.preventDefault();
    onRegister(title, content);
  }, [title, content, onRegister]);

  return (
    <div className="container">
      <h3 style={{ marginBottom: '40px' }}>새로운 글 작성</h3>
      <form onSubmit={handleSubmit} className="col s12">
        <div className="row">
          <div className="input-field col s12">
            <input
              type="text"
              id="title"
              value={title}
              onChange={handleChangeTitle}
              required
            />
            <label htmlFor="title">제목</label>
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
            <label htmlFor="textarea">내용</label>
          </div>
        </div>
        <br />
        <Link to="/board" className="waves-effect waves-light btn">취소</Link>{' '}
        <button type="submit" className="waves-effect waves-light btn blue">등록</button>
      </form>
    </div>
  );
};

export default BoardRegisterForm;
