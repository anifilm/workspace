import React, { useState, useCallback } from 'react';
import { Link } from 'react-router-dom';

interface Props {
  readonly onRegister: (title: string, content: string, writer: string) => void;
}

function BoardRegisterForm({ onRegister }: Props) {
  const [title, setTitle] = useState('');
  const [content, setContent] = useState('');
  const [writer, setWriter] = useState('');

  const handleChangeTitle = useCallback((e: React.ChangeEvent<HTMLInputElement>) => {
    setTitle(e.target.value);
  }, []);
  const handleChangeContent = useCallback((e: React.ChangeEvent<HTMLTextAreaElement>) => {
    setContent(e.target.value);
  }, []);
  const handleChangeWriter = useCallback((e: React.ChangeEvent<HTMLInputElement>) => {
    setWriter(e.target.value);
  }, []);

  const handleSubmit = useCallback((e) => {
    e.preventDefault();
    onRegister(title, content, writer);
  }, [title, content, writer, onRegister]);

  return (
    <div className="container">
      <h3>새로운 글 작성</h3>
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
          <div className="input-field col s12">
            <input
              type="text"
              id="writer"
              value={writer}
              onChange={handleChangeWriter}
              required
            />
            <label htmlFor="writer">작성자</label>
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
        <Link to="/" className="waves-effect waves-light btn">취소</Link>{' '}
        <button type="submit" className="waves-effect waves-light btn blue">등록</button>
      </form>
    </div>
  );
}

export default BoardRegisterForm;