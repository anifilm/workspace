import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';
import { fetchGroupCodeList } from 'lib/api';

import M from 'materialize-css';

const CodeDetailRead = ({ codeDetail, groupCode, codeValue, isLoading, onRemove }) => {
  // 컴포넌트 상태 설정
  const [groupCodes, setGroupCodes] = useState([]);

  // 그룹코드 목록을 가져옴
  const getGroupCodeList = async () => {
    try {
      const response = await fetchGroupCodeList();
      setGroupCodes(response.data);
    } catch (err) {
      throw err;
    }
  };

  useEffect(() => {
    M.AutoInit(); // materialize select 태그 사용
  });

  // 마운트될 때 그룹코드 목록을 가져옴
  useEffect(() => {
    getGroupCodeList();
  }, []);

  // 코드 상세보기 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>코드 상세보기</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && codeDetail && (
        <div className="row">
          <div className="row">
            <div className="input-field col s12">
              <select id="groupCode" value={codeDetail.groupCode} readOnly>
                {groupCodes.map((groupCode) => (
                  <option value={groupCode.value} key={groupCode.value}>
                    {groupCode.label}
                  </option>
                ))}
              </select>
              <label htmlFor="groupCode">그룹코드</label>
            </div>
            <div className="input-field col s6">
              <input
                type="text"
                id="codeValue"
                value={codeDetail.codeValue}
                readOnly
              />
              <label className="active" htmlFor="codeValue">코드값</label>
            </div>
            <div className="input-field col s6">
              <input
                type="text"
                id="codeName"
                value={codeDetail.codeName}
                readOnly
              />
              <label className="active" htmlFor="codeName">코드명</label>
            </div>
          </div>
          <br />
          <Link to="/codedetail" className="waves-effect waves-light btn">
            코드 목록
          </Link>{' '}
          <Link to={`/codedetail/edit/${groupCode}/${codeValue}`} className="waves-effect waves-light btn blue">수정</Link>
          <button onClick={onRemove} className="waves-effect waves-light btn red right">삭제</button>
        </div>
      )}
    </div>
  );
};

export default CodeDetailRead;
