import React from 'react';
import { Link } from 'react-router-dom';

const CodeGroupRead = ({ codeGroup, groupCode, isLoading, onRemove }) => {
  // 코드그룹 상세보기 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>코드그룹 상세보기</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && codeGroup && (
        <div className="row">
          <div className="row">
            <div className="input-field col s6">
              <input type="text" id="groupCode" value={codeGroup.groupCode} disabled />
              <label className="active" htmlFor="groupCode">코드그룹코드</label>
            </div>
            <div className="input-field col s6">
              <input type="text" id="groupName" value={codeGroup.groupName} readOnly />
              <label className="active" htmlFor="groupName">코드그룹명</label>
            </div>
          </div>
          <br />
          <Link to="/codegroup" className="waves-effect waves-light btn">
            상품 목록
          </Link>{' '}
          <Link to={`/codegroup/edit/${groupCode}`} className="waves-effect waves-light btn blue">수정</Link>
          <button onClick={onRemove} className="waves-effect waves-light btn red right">삭제</button>
        </div>
      )}
    </div>
  );
};

export default CodeGroupRead;
