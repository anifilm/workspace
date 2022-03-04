import React from 'react';
import { Link } from 'react-router-dom';

const CodeDetailList = ({ codeDetails, isLoading }) => {
  // 코드그룹 목록 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '30px' }}>코드 목록</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && codeDetails && (
        <>
          <table>
            <thead>
              <tr>
                <th style={{ width: 160, textAlign: 'center' }}>코드코드</th>
                <th style={{ width: 160, textAlign: 'center' }}>코드값</th>
                <th style={{ width: 160, textAlign: 'center' }}>코드명</th>
                <th style={{ width: 160, textAlign: 'center' }}>정렬순서</th>
                <th style={{ width: 180, textAlign: 'center' }}>등록일시</th>
              </tr>
            </thead>
            <tbody>
              {!codeDetails.length && (
                <tr>
                  <td></td>
                  <td colSpan="5">List is empty.</td>
                </tr>
              )}
              {!!codeDetails.length && codeDetails.map((codeDetail) => (
                <tr key={`${codeDetail.groupCode}${codeDetail.codeValue}`}>
                  <td style={{ textAlign: 'center' }}>{codeDetail.groupCode}</td>
                  <td style={{ textAlign: 'center' }}>{codeDetail.codeValue}</td>
                  <td style={{ textAlign: 'center'}}>
                    <Link to={`/codedetail/read/${codeDetail.groupCode}/${codeDetail.codeValue}`}>{codeDetail.codeName}</Link>
                  </td>
                  <td style={{ textAlign: 'center'}}>{codeDetail.sortSeq}</td>
                  <td style={{ textAlign: 'center'}}>{codeDetail.regDate}</td>
                </tr>
              ))}
            </tbody>
          </table>
          <br />
          <Link to="/codedetail/create" className="waves-effect waves-light btn blue">
            새로운 코드 등록
          </Link>
        </>
      )}
    </div>
  );
};

export default CodeDetailList;
