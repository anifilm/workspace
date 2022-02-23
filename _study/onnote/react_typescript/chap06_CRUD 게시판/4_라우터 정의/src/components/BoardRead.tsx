import React from 'react';
import { Link } from 'react-router-dom';
import styles from '../Board.module.css';

function BoardRead() {
  return (
    <div className={styles.centered}>
      <h2>게시판 상세보기</h2>
      <table>
        <tbody>
          <tr>
            <td>번호</td>
            <td><input type="text" value="100" readOnly /></td>
          </tr>
          <tr>
            <td>등록일시</td>
            <td><input type="text" value="2022-02-23" readOnly /></td>
          </tr>
          <tr>
            <td>작성자</td>
            <td><input type="text" value="홍길동" readOnly /></td>
          </tr>
          <tr>
            <td>제목</td>
            <td><input type="text" value="무제" readOnly /></td>
          </tr>
          <tr>
            <td>내용</td>
            <td><textarea value="내용없음" readOnly></textarea></td>
          </tr>
        </tbody>
      </table>

      <div className={styles.align_centered}>
        <Link to={'/edit/100'}>편집</Link>
        <button>삭제</button>
        <Link to="/">목록</Link>
      </div>
    </div>
  );
}

export default BoardRead;
