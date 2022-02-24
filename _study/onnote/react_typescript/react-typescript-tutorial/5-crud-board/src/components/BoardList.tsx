import React from 'react';
import { Link } from 'react-router-dom';
import { Board } from '../App';
import styles from '../Board.module.css';

interface Props {
  readonly boards: Board[];
  readonly isLoading: boolean;
}

function BoardList({ boards, isLoading }: Props) {
  return (
    <div className={styles.centered}>
      <h2>게시글 목록</h2>
      {isLoading && 'Loading...'}
      {!isLoading && boards && (
        <>
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
              {!boards.length && (
                <tr>
                  <td colSpan={4}>List is empty.</td>
                </tr>
              )}
              {!!boards.length && boards.map((board) => (
                <tr key={board.boardNo}>
                  <td align="center">{board.boardNo}</td>
                  <td align="left"><Link to={`/read/${board.boardNo}`}>{board.title}</Link></td>
                  <td align="center">{board.writer}</td>
                  <td align="center">{board.regDate}</td>
                </tr>
              ))}
            </tbody>
          </table>
        </>
      )}
    </div>
  );
}

export default BoardList;
