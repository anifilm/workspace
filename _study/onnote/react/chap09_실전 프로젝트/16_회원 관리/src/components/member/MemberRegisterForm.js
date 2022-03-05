import React, { useState, useCallback, useEffect } from 'react';
import { Link } from 'react-router-dom';
import { fetchJobCodeList } from 'lib/api';

import M from 'materialize-css';

// 등록 처리 함수를 컴포넌트 속성으로 전달받음
const MemberRegisterForm = ({ onRegister }) => {
  // 컴포넌트 상태 설정
  const [userId, setUserId] = useState('');
  const [userPw, setUserPw] = useState('');
  const [userName, setUserName] = useState('');
  const [job, setJob] = useState('01'); // 기본값 01 - 'Developer'
  const [jobCodes, setJobCodes] = useState([]);

  // 회원아이디의 변경을 처리하는 함수
  const handleChangeUserId = useCallback((e) => {
    setUserId(e.target.value);
  }, []);
  // 비밀번호의 변경을 처리하는 함수
  const handleChangeUserPw = useCallback((e) => {
    setUserPw(e.target.value);
  }, []);
  // 사용자명의 변경을 처리하는 함수
  const handleChangeUserName = useCallback((e) => {
    setUserName(e.target.value);
  }, []);
  // 직업 변경을 처리하는 함수
  const handleChangeJob = useCallback((e) => {
    setJob(e.target.value);
  }, []);

  // 폼 submit 이벤트 처리
  const handleSubmit = useCallback((e) => {
    e.preventDefault();
    onRegister(userId, userPw, userName, job);
  }, [userId, userPw, userName, job, onRegister]);

  // 직업코드 목록을 가져옴
  const getJobCodeList = async () => {
    try {
      const response = await fetchJobCodeList();
      setJobCodes(response.data);
    } catch (err) {
      throw err;
    }
  };

  useEffect(() => {
    M.AutoInit(); // materialize select 태그 사용
  });

  // 마운팅될 때 직업 코드 목록을 가져옴
  useEffect(() => {
    getJobCodeList();
  }, []);

  // 회원 등록 폼 화면 표시
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
              <label className="active" htmlFor="userId">아이디</label>
            </div>
            <div className="input-field col s12">
              <input
                type="password"
                id="userPw"
                value={userPw}
                onChange={handleChangeUserPw}
                required
              />
              <label className="active" htmlFor="userPw">비밀번호</label>
            </div>
            <div className="input-field col s12">
              <input
                type="text"
                id="userName"
                value={userName}
                onChange={handleChangeUserName}
                required
              />
              <label className="active" htmlFor="userName">사용자명</label>
            </div>
            <div className="input-field col s12">
              <select id="jobCode" value={job} onChange={handleChangeJob}>
                {jobCodes.map((jobCode) => (
                  <option value={jobCode.value} key={jobCode.value}>
                    {jobCode.label}
                  </option>
                ))}
              </select>
              <label htmlFor="jobCode">직업</label>
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
