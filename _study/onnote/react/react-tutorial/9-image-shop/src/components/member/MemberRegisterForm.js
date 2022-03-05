import React, { useState, useCallback, useEffect } from 'react';
import { Link } from 'react-router-dom';

// 등록 처리 함수를 컴포넌트 속성으로 전달받음
const MemberRegisterForm = ({ onRegister }) => {
  // 컴포넌트 상태 설정
  const [userId, setuserId] = useState('');
  const [userPw, setuserPw] = useState('');
  const [userName, setUserName] = useState('');

  const [jobCodes, setJobCodes] = useState([]);

  // 회원아이디의 변경을 처리하는 함수
  const handleChangeUserId = useCallback((e) => {
    setuserId(e.target.value);
  }, []);
  // 비밀번호의 변경을 처리하는 함수
  const handleChangeUserPw = useCallback((e) => {

  }, []);
  // 사용자명의 변경을 처리하는 함수
  const handleChangeUserName = useCallback((e) => {

  }, []);
  // 직업 변경을 처리하는 함수
  const handleChangeJob = useCallback((e) => {

  }, []);

  // 폼 submit 이벤트 처리
  const handleSubmit = useCallback((e) => {
    e.preventDefault();
    onRegister(userId, userPw);
  }, [userId, userPw, onRegister]);

  // 직업코드 목록을 가져옴
  const getJobCodeList = async () => {

  };

  // 마운팅될 때 직업 코드 목록을 가져옴
  useEffect(() => {

  }, []);

  // 회원목록 등록 폼 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>회원 등록</h3>
      <div className="row">
        <form onSubmit={handleSubmit} className="col s12">
          <div className="row">
            <div className="input-field col s12">
              <input
                type="text"
                id="userId"
                value={userId}
                onChange={handleChangeUserId}
                required
              />
              <label className="active" htmlFor="userId">그룹코드</label>
            </div>
            <div className="input-field col s12">
              <input type="text" id="groupName" value={userName} onChange={handleChangeUserName} />
              <label className="active" htmlFor="groupName">회원목록명</label>
            </div>
          </div>
          <br />
          <Link to="/member" className="waves-effect waves-light btn">취소</Link>{' '}
          <button type="submit" className="waves-effect waves-light btn blue">등록</button>
        </form>
      </div>
    </div>
  );
};

export default MemberRegisterForm;
