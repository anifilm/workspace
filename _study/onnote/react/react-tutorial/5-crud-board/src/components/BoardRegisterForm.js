import React, { useState, useCallback } from 'react';
import { Link } from 'react-router-dom';
import styles from '../Board.module.css';

// 등록 처리 함수를 컴포넌트 속성으로 전달받음
function BoardRegisterForm({ onRegister }) {
  // 컴포넌트 상태 설정
  const [title, setTitle] = useState('');
  const [content, setContent] = useState('');
  const [writer, setWriter] = useState('');

  const handleChangeTitle = useCallback((e) => {
    setTitle(e.target.value);
  }, []);
  const handleChangeContent = useCallback((e) => {
    setContent(e.target.value);
  }, []);
  const handleChangeWriter = useCallback((e) => {
    setWriter(e.target.value);
  }, []);

  const handleSubmit = useCallback((e) => {
    e.preventDefault();
    // 등록 처리 함수 호출
    onRegister(title, content, writer);
  }, [title, content, writer, onRegister]);

  return (
    <div className={styles.centered}>
      <h2>게시글 등록</h2>
      <form onSubmit={handleSubmit}>
        <table>
          <tbody>
            <tr>
              <td>제목</td>
              <td><input type="text" value={title} onChange={handleChangeTitle} /></td>
            </tr>
            <tr>
              <td>작성자</td>
              <td><input type="text" value={writer} onChange={handleChangeWriter} /></td>
            </tr>
            <tr>
              <td>내용</td>
              <td>
                <textarea
                  rows={5}
                  value={content}
                  onChange={handleChangeContent}
                ></textarea>
              </td>
            </tr>
          </tbody>
        </table>

        <div className={styles.align_centerd}>
          <button type="submit">등록</button>
          <Link to="/">취소</Link>
        </div>
      </form>
    </div>
  );
}

export default BoardRegisterForm;
