import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';

const MemberModifyForm = ({ member, isLoading, onModify }) => {
  const [groupName, setGroupName] = useState('');

  const [jobCodes, setJobCodes] = useState([]);
  const [auth1, setAuth1] = useState('');
  const [auth2, setAuth2] = useState('');
  const [auth3, setAuth3] = useState('');

  // 사용자명 값의 변경을 처리하는 함수
  const handleChangeUserName = (e) => {
    setGroupName(e.target.value);
  };
  // 직업의 변경을 처리하는 함수
  const handleChangeJob = (e) => {
    setJobCodes(e.target.value);
  };
  // 사용자 권한의 변경을 처리하는 함수
  const handleChangeAuth1 = (e) => {

  };

  // 폼 submit 이벤트 처리
  const handleSubmit = (e) => {
    e.preventDefault();
    onModify(member.groupCode, groupName);
  };

  // 직업코드 목록을 가져옴
  const getJobCodeList = async () => {

  };

  // 마운팅될 때 직업 코드 목록을 가져옴
  useEffect(() => {

  }, []);

  // 마운트될 때 기존의 사용자명, 직업코드, 권한을 가져옴

  // 회원 수정 폼 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>회원 수정</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && member && (
        <div className="row">
          <form onSubmit={handleSubmit} className="col s12">
            <div className="row">
              <div className="input-field col s6">
                <input
                  type="text"
                  id="groupCode"
                  value={member.groupCode}
                  disabled
                />
                <label className="active" htmlFor="groupCode">회원목록코드</label>
              </div>
              <div className="input-field col s6">
                <input
                  type="text"
                  id="groupName"
                  value={groupName}
                  onChange={handleChangeUserName}
                />
                <label className="active" htmlFor="groupName">회원목록명</label>
              </div>
            </div>
            <br />
            <Link to={`/member/read/${member.groupCode}`} className="waves-effect waves-light btn">취소</Link>{' '}
            <button type="submit" className="waves-effect waves-light btn blue">완료</button>
          </form>
        </div>
      )}
    </div>
  );
};

export default MemberModifyForm;
