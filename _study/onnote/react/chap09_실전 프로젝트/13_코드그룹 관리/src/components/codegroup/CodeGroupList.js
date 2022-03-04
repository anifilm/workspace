import React from 'react';
import { Link } from 'react-router-dom';

const CodeGroupList = ({ codeGroups, isLoading }) => {
  // 코드그룹 목록 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '30px' }}>코드그룹 목록</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && codeGroups && (
        <>
          <table>
            <thead>
              <tr>
                <th style={{ width: 160, textAlign: 'center' }}>코드그룹코드</th>
                <th style={{ width: 160, textAlign: 'center' }}>코드그룹명</th>
                <th style={{ width: 180, textAlign: 'center' }}>등록일시</th>
              </tr>
            </thead>
            <tbody>
              {!codeGroups.length && (
                <tr>
                  <td></td>
                  <td colSpan="3">List is empty.</td>
                </tr>
              )}
              {!!codeGroups.length && codeGroups.map((codeGroup) => (
                <tr key={codeGroup.groupCode}>
                  <td style={{ textAlign: 'center' }}>{codeGroup.groupCode}</td>
                  <td style={{ textAlign: 'center'}}>
                    <Link to={`/codegroup/read/${codeGroup.groupCode}`}>{codeGroup.groupName}</Link>
                  </td>
                  <td style={{ textAlign: 'center'}}>{codeGroup.regDate}</td>
                </tr>
              ))}
            </tbody>
          </table>
          <br />
          <Link to="/codegroup/create" className="waves-effect waves-light btn blue">
            새로운 코드그룹 등록
          </Link>
        </>
      )}
    </div>
  );
};

export default CodeGroupList;
