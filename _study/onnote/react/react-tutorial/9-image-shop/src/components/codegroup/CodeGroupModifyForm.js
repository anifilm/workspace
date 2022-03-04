import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';

const CodeGroupModifyForm = ({ codeGroup, isLoading, onModify }) => {
  const [groupName, setGroupName] = useState('');

  // 코드그룹명 값의 변경을 처리하는 함수
  const handleChangeGroupName = (e) => {
    setGroupName(e.target.value);
  };

  // 폼 submit 이벤트 처리
  const handleSubmit = (e) => {
    e.preventDefault();
    onModify(codeGroup.groupCode, groupName);
  };

  // 마운팅될 때 기존의 코드그룹명을 가져옴
  useEffect(() => {
    if (codeGroup) {
      setGroupName(codeGroup.groupName);
    }
  }, [codeGroup]);

  // 코드그룹 수정 폼 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>코드그룹 수정</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && codeGroup && (
        <div className="row">
          <form onSubmit={handleSubmit} className="col s12">
            <div className="row">
              <div className="input-field col s6">
                <input
                  type="text"
                  id="groupCode"
                  value={codeGroup.groupCode}
                  disabled
                />
                <label className="active" htmlFor="groupCode">코드그룹코드</label>
              </div>
              <div className="input-field col s6">
                <input
                  type="text"
                  id="groupName"
                  value={groupName}
                  onChange={handleChangeGroupName}
                />
                <label className="active" htmlFor="groupName">코드그룹명</label>
              </div>
            </div>
            <br />
            <Link to={`/codegroup/read/${codeGroup.groupCode}`} className="waves-effect waves-light btn">취소</Link>{' '}
            <button type="submit" className="waves-effect waves-light btn blue">완료</button>
          </form>
        </div>
      )}
    </div>
  );
};

export default CodeGroupModifyForm;
