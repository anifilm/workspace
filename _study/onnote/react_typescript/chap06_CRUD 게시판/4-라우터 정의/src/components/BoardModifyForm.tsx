import React from 'react';
import { Link } from 'react-router-dom';
import styles from '../Board.module.css';

function BoardModifyForm() {
  return (
    <div className={styles.centered}>
      <h2>게시판 수정</h2>
      <form>
        <table>
          <tbody>
            <tr>
              <td>번호</td>
              <td><input type="text" value="100" disabled /></td>
            </tr>
            <tr>
              <td>등록일시</td>
              <td><input type="text" value="2022-02-23" disabled /></td>
            </tr>
            <tr>
              <td>작성자</td>
              <td><input type="text" value="홍길동" disabled /></td>
            </tr>
            <tr>
              <td>제목</td>
              <td><input type="text" /></td>
            </tr>
            <tr>
              <td>내용</td>
              <td><textarea rows={5}></textarea></td>
            </tr>
          </tbody>
        </table>

        <div className={styles.align_centered}>
          <button type="submit">수정</button>
          <Link to={'/read/100'}>취소</Link>
        </div>
      </form>
    </div>
  );
}

export default BoardModifyForm;
