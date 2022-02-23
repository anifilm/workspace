import React from 'react';
import { Link } from 'react-router-dom';
import styles from '../Board.module.css';

function BoardRegisterForm() {
  return (
    <div className={styles.centered}>
      <h2>게시판 등록</h2>
      <form>
        <table>
          <tbody>
            <tr>
              <td>제목</td>
              <td><input type="text" /></td>
            </tr>
            <tr>
              <td>작성자</td>
              <td><input type="text" /></td>
            </tr>
            <tr>
              <td>내용</td>
              <td><textarea rows={5}></textarea></td>
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
