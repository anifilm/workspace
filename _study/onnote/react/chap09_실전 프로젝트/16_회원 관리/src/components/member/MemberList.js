import React from 'react';
import { Link } from 'react-router-dom';

const MemberList = ({ members, isLoading }) => {
  // 회원 목록 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '30px' }}>회원 목록</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && members && (
        <>
          <table>
            <thead>
              <tr>
                <th style={{ width: 60, textAlign: 'center' }}>번호</th>
                <th style={{ width: 80, textAlign: 'center' }}>아이디</th>
                <th style={{ width: 300, textAlign: 'center' }}>비밀번호</th>
                <th style={{ width: 100, textAlign: 'center' }}>사용자명</th>
                <th style={{ width: 100, textAlign: 'center' }}>직업</th>
                <th style={{ width: 180, textAlign: 'center' }}>등록일시</th>
              </tr>
            </thead>
            <tbody>
              {!members.length && (
                <tr>
                  <td></td>
                  <td colSpan="6">List is empty.</td>
                </tr>
              )}
              {!!members.length && members.map((member) => (
                <tr key={member.userNo}>
                  <td style={{ textAlign: 'center' }}>{member.userNo}</td>
                  <td style={{ textAlign: 'center'}}>
                    <Link to={`/member/read/${member.userNo}`}>{member.userId}</Link>
                  </td>
                  <td style={{ textAlign: 'center'}}>{member.userPw.substr(0,30)}...</td>
                  <td style={{ textAlign: 'center'}}>{member.userName}</td>
                  <td style={{ textAlign: 'center'}}>{member.job}</td>
                  <td style={{ textAlign: 'center'}}>{member.regDate}</td>
                </tr>
              ))}
            </tbody>
          </table>
          <br />
          <Link to="/member/create" className="waves-effect waves-light btn blue">
            새로운 회원 등록
          </Link>
        </>
      )}
    </div>
  );
};

export default MemberList;
