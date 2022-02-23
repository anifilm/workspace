import React from 'react';
import { Link } from 'react-router-dom';
import styles from '../Board.module.css';

function BoardList() {
  return (
    <div className={styles.centered}>
      <h2>게시판 목록</h2>
      <Link to="/create">새로만들기</Link>
      <table className={styles.board_table}>
        <thead>
          <tr>
            <th className={styles.board_no}>번호</th>
            <th className={styles.board_title}>제목</th>
            <th className={styles.board_writer}>작성자</th>
            <th className={styles.board_date}>등록일시</th>
          </tr>
        </thead>
        <tbody>
          <tr>
            <td align="center">100</td>
            <td align="left"><Link to="/read/100">무제</Link></td>
            <td align="center">홍길동</td>
            <td align="center">2022-02-23</td>
          </tr>
        </tbody>
      </table>
    </div>
  );
}

export default BoardList;
