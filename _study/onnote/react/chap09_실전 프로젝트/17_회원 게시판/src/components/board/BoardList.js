import React from 'react';
import { Link } from 'react-router-dom';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const BoardList = ({ boards, isMember, isLoading }) => {
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '30px' }}>게시글 목록</h3>
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
                <th style={{ width: 80, textAlign: 'center' }}>번호</th>
                <th style={{ width: 320, textAlign: 'center' }}>제목</th>
                <th style={{ width: 100, textAlign: 'center' }}>글쓴이</th>
                <th style={{ width: 180, textAlign: 'center' }}>작성일자</th>
              </tr>
            </thead>
            <tbody>
              {!boards.length && (
                <tr>
                  <td></td>
                  <td colSpan="4">
                    등록된 게시물이 없습니다.
                  </td>
                </tr>
              )}
              {!!boards.length && boards.map((board) => (
                <tr key={board.boardNo}>
                  <td style={{ textAlign: 'center' }}>{board.boardNo}</td>
                  <td style={{ textAlign: 'left', paddingLeft: 50 }}><Link to={`/board/read/${board.boardNo}`}>{board.title}</Link></td>
                  <td style={{ textAlign: 'center' }}>{board.writer}</td>
                  <td style={{ textAlign: 'center' }}>{board.regDate}</td>
                </tr>
              ))}
            </tbody>
          </table>
          {isMember && (
            <>
              <br />
              <Link to="/board/create" className="waves-effect waves-light btn blue">새로운 글 작성</Link>
            </>
          )}
        </>
      )}
    </div>
  );
};

export default BoardList;
