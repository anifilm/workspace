import React, { useState, useCallback, useEffect } from 'react';
import { Link } from 'react-router-dom';
import { fetchGroupCodeList } from 'lib/api';

import M from 'materialize-css';

// 등록 처리 함수를 컴포넌트 속성으로 전달받음
const CodeDetailRegisterForm = ({ onRegister }) => {
  // 컴포넌트 상태 설정
  const [groupCode, setGroupCode] = useState('A01');
  const [groupCodes, setGroupCodes] = useState([]);
  const [codeValue, setCodeValue] = useState('');
  const [codeName, setCodeName] = useState('');

  // 그룹코드 값의 변경을 처리하는 함수
  const handleChangeGroupCode = useCallback((e) => {
    setGroupCode(e.target.value);
  }, []);
  // 코드 값의 변경을 처리하는 함수
  const handleChangeCodeValue = useCallback((e) => {
    setCodeValue(e.target.value);
  }, []);
  // 코드명 값의 변경을 처리하는 함수
  const handleChangeCodeName = useCallback((e) => {
    setCodeName(e.target.value);
  }, []);

  // 폼 submit 이벤트 처리
  const handleSubmit = useCallback((e) => {
    e.preventDefault();
    onRegister(groupCode, codeValue, codeName);
  }, [groupCode, codeValue, codeName, onRegister]);

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

  // 코드 등록 폼 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>코드 등록</h3>
      <div className="row">
        <form onSubmit={handleSubmit} className="col s12">
          <div className="row">
            <div className="input-field col s12">
              <select onChange={handleChangeGroupCode} value={groupCode}>
                {groupCodes.map((groupCode) => (
                  <option value={groupCode.value} key={groupCode.value}>
                    {groupCode.label}
                  </option>
                ))}
              </select>
              <label className="active" htmlFor="groupCode">그룹코드</label>
            </div>
            <div className="input-field col s12">
              <input
                type="text"
                id="codeValue"
                value={codeValue}
                onChange={handleChangeCodeValue}
              />
              <label className="active" htmlFor="codeValue">코드값</label>
            </div>
            <div className="input-field col s12">
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
          <Link to="/codedetail" className="waves-effect waves-light btn">취소</Link>{' '}
          <button type="submit" className="waves-effect waves-light btn blue">등록</button>
        </form>
      </div>
    </div>
  );
};

export default CodeDetailRegisterForm;
