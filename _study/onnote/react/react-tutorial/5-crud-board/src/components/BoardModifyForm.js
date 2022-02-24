import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';
import styles from '../Board.module.css';

// 컴포넌트 속성값 수신
function BoardModifyForm({ board, isLoading, onModify }) {
  // 컴포넌트 상태 설정
  const [title, setTitle] = useState('');
  const [content, setContent] = useState('');

  const handleChangeTitle = (e) => {
    setTitle(e.target.value);
  };
  const handleChangeContent = (e) => {
    setContent(e.target.value);
  };

  // 폼 submit 이벤트 처리
  const handleSubmit = (e) => {
    e.preventDefault();
    onModify(board.boardNo, title, content);
  };

  // 마운트될 때 게시글 상세정보를 가져옴
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
    <div className={styles.centered}>
      <h2>게시글 수정</h2>
      {isLoading && 'Loading...'}
      {!isLoading && board && (
        <>
          <form onSubmit={handleSubmit}>
            <table>
              <tbody>
                <tr>
                  <td>번호</td>
                  <td><input type="text" value={board.boardNo} disabled /></td>
                </tr>
                <tr>
                  <td>등록일시</td>
                  <td><input type="text" value={board.regDate} disabled /></td>
                </tr>
                <tr>
                  <td>작성자</td>
                  <td><input type="text" value={board.writer} disabled /></td>
                </tr>
                <tr>
                  <td>제목</td>
                  <td><input type="text" value={title} onChange={handleChangeTitle} /></td>
                </tr>
                <tr>
                  <td>내용</td>
                  <td><textarea value={content} onChange={handleChangeContent} rows={5}></textarea></td>
                </tr>
              </tbody>
            </table>

            <div className={styles.align_centered}>
              <button type="submit">수정</button>
              <Link to={`/read/${board.boardNo}`}>취소</Link>
            </div>
          </form>
        </>
      )}
    </div>
  );
}

export default BoardModifyForm;
