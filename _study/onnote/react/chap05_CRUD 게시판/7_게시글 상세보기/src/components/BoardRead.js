import React from 'react';
import { Link } from 'react-router-dom';
import styles from '../Board.module.css';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
function BoardRead({ boardNo, board, isLoading }) {
  return (
    <div className={styles.centered}>
      <h2>게시글 상세보기</h2>
      {isLoading && 'Loading...'}
      {!isLoading && board && (
        <>
          <table>
            <tbody>
              <tr>
                <td>번호</td>
                <td><input type="text" value={board.boardNo} readOnly /></td>
              </tr>
              <tr>
                <td>등록일시</td>
                <td><input type="text" value={board.regDate} readOnly /></td>
              </tr>
              <tr>
                <td>작성자</td>
                <td><input type="text" value={board.writer} readOnly /></td>
              </tr>
              <tr>
                <td>제목</td>
                <td><input type="text" value={board.title} readOnly /></td>
              </tr>
              <tr>
                <td>내용</td>
                <td><textarea value={board.content} readOnly></textarea></td>
              </tr>
            </tbody>
          </table>

          <div className={styles.align_centered}>
            <Link to={`/edit/${boardNo}`}>수정</Link>
            <button>삭제</button>
            <Link to="/">목록</Link>
          </div>
        </>
      )}
    </div>
  );
}

export default BoardRead;
