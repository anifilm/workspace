import React, { useState, useCallback } from 'react';
import { Link } from 'react-router-dom';

// 등록 처리 함수를 컴포넌트 속성으로 전달받음
const CodeGroupRegisterForm = ({ onRegister }) => {
  // 컴포넌트 상태 설정
  const [groupCode, setGroupCode] = useState('');
  const [groupName, setGroupName] = useState('');

  // 그룹코드 값의 변경을 처리하는 함수
  const handleChangeGroupCode = useCallback((e) => {
    setGroupCode(e.target.value);
  }, []);
  // 코드그룹명 값의 변경을 처리하는 함수
  const handleChangeGroupName = useCallback((e) => {
    setGroupName(e.target.value);
  }, []);

  // 폼 submit 이벤트 처리
  const handleSubmit = useCallback((e) => {
    e.preventDefault();
    onRegister(groupCode, groupName);
  }, [groupCode, groupName, onRegister]);

  // 코드그룹 등록 폼 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>코드그룹 등록</h3>
      <div className="row">
        <form onSubmit={handleSubmit} className="col s12">
          <div className="row">
            <div className="input-field col s12">
              <input
                type="text"
                id="groupCode"
                value={groupCode}
                onChange={handleChangeGroupCode}
                required
              />
              <label className="active" htmlFor="groupCode">그룹코드</label>
            </div>
            <div className="input-field col s12">
              <input type="text" id="groupName" value={groupName} onChange={handleChangeGroupName} />
              <label className="active" htmlFor="groupName">코드그룹명</label>
            </div>
          </div>
          <br />
          <Link to="/codegroup" className="waves-effect waves-light btn">취소</Link>{' '}
          <button type="submit" className="waves-effect waves-light btn blue">등록</button>
        </form>
      </div>
    </div>
  );
};

export default CodeGroupRegisterForm;
