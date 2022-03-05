import React from 'react';
import { Link } from 'react-router-dom';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const NoticeList = ({ notices, isAdmin, isLoading }) => {
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '30px' }}>공지사항 목록</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && notices && (
        <>
          <table>
            <thead>
              <tr>
                <th style={{ width: 80, textAlign: 'center' }}>번호</th>
                <th style={{ width: 320, textAlign: 'center' }}>제목</th>
                <th style={{ width: 180, textAlign: 'center' }}>등록일시</th>
              </tr>
            </thead>
            <tbody>
              {!notices.length && (
                <tr>
                  <td></td>
                  <td colSpan="3">
                    등록된 게시물이 없습니다.
                  </td>
                </tr>
              )}
              {!!notices.length && notices.map((notice) => (
                <tr key={notice.noticeNo}>
                  <td style={{ textAlign: 'center' }}>{notice.noticeNo}</td>
                  <td style={{ textAlign: 'left', paddingLeft: 60 }}><Link to={`/notice/read/${notice.noticeNo}`}>{notice.title}</Link></td>
                  <td style={{ textAlign: 'center' }}>{notice.regDate}</td>
                </tr>
              ))}
            </tbody>
          </table>
          {isAdmin && (
            <>
              <br />
              <Link to="/notice/create" className="waves-effect waves-light btn blue">새로운 공지 작성</Link>
            </>
          )}
        </>
      )}
    </div>
  );
};

export default NoticeList;
