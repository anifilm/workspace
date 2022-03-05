import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';
import { fetchGroupCodeList } from 'lib/api';

import M from 'materialize-css';

const CodeDetailModifyForm = ({ codeDetail, isLoading, onModify }) => {
  const [groupCodes, setGroupCodes] = useState([]);
  const [codeValue, setCodeValue] = useState('');
  const [codeName, setCodeName] = useState('');

  // 코드명 값의 변경을 처리하는 함수
  const handleChangeCodeName = (e) => {
    setCodeName(e.target.value);
  };

  // 폼 submit 이벤트 처리
  const handleSubmit = (e) => {
    e.preventDefault();
    onModify(codeDetail.groupCode, codeValue, codeName);
  };

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

  // 마운팅될 때 그룹코드 목록을 가져옴
  useEffect(() => {
    getGroupCodeList();
  }, []);

  // 마운팅될 때 기존의 코드값과 코드명을 가져옴
  useEffect(() => {
    if (codeDetail) {
      setCodeValue(codeDetail.codeValue);
      setCodeName(codeDetail.codeName);
    }
  }, [codeDetail]);

  // 코드그룹 수정 폼 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>코드 수정</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && codeDetail && (
        <div className="row">
          <form onSubmit={handleSubmit} className="col s12">
            <div className="row">
              <div className="input-field col s12">
                <select value={codeDetail.groupCode} disabled>
                  {groupCodes.map((groupCode) => (
                    <option value={groupCode.value} key={groupCode.value}>
                      {groupCode.label}
                    </option>
                  ))}
                </select>
                <label className="active" htmlFor="groupCode">그룹코드</label>
              </div>
              <div className="input-field col s6">
                <input
                  type="text"
                  id="codeValue"
                  value={codeValue}
                  disabled
                />
                <label className="active" htmlFor="codeValue">코드값</label>
              </div>
              <div className="input-field col s6">
                <input
                  type="text"
                  id="codeName"
                  value={codeName}
                  onChange={handleChangeCodeName}
                />
                <label className="active" htmlFor="codeName">코드명</label>
              </div>
            </div>
            <br />
            <Link to={`/codedetail/read/${codeDetail.groupCode}/${codeDetail.codeValue}`} className="waves-effect waves-light btn">취소</Link>{' '}
            <button type="submit" className="waves-effect waves-light btn blue">완료</button>
          </form>
        </div>
      )}
    </div>
  );
};

export default CodeDetailModifyForm;
