import React from 'react';
import { Link } from 'react-router-dom';
import { Board } from '../App';

interface Props {
  readonly boards: Board[];
  readonly isLoading: boolean;
}

function BoardList({ boards, isLoading }: Props) {
  return (
    <div className="container">
      <h3>게시글 목록</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && boards && (
        <>
          <table>
            <thead>
              <tr>
                <th style={{ width: 80 }}>번호</th>
                <th style={{ width: 320 }}>제목</th>
                <th style={{ width: 100 }}>글쓴이</th>
                <th style={{ width: 180 }}>작성일자</th>
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
          <br />
          <Link to="/create" className="waves-effect waves-light btn blue">새로운 글 작성</Link>
        </>
      )}
    </div>
  );
}

export default BoardList;
