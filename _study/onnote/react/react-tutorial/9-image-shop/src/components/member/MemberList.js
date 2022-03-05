import React from 'react';
import { Link } from 'react-router-dom';

const MemberList = ({ members, isLoading }) => {
  // 회원목록 목록 화면 표시
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
                <th style={{ width: 160, textAlign: 'center' }}>회원목록코드</th>
                <th style={{ width: 160, textAlign: 'center' }}>회원목록명</th>
                <th style={{ width: 180, textAlign: 'center' }}>등록일시</th>
              </tr>
            </thead>
            <tbody>
              {!members.length && (
                <tr>
                  <td></td>
                  <td colSpan="3">List is empty.</td>
                </tr>
              )}
              {!!members.length && members.map((codeGroup) => (
                <tr key={codeGroup.groupCode}>
                  <td style={{ textAlign: 'center' }}>{codeGroup.groupCode}</td>
                  <td style={{ textAlign: 'center'}}>
                    <Link to={`/member/read/${codeGroup.groupCode}`}>{codeGroup.groupName}</Link>
                  </td>
                  <td style={{ textAlign: 'center'}}>{codeGroup.regDate}</td>
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
