import React, { useState, useCallback, useEffect } from 'react';
import { Link } from 'react-router-dom';
import { fetchJobCodeList } from 'lib/api';

import M from 'materialize-css';

// 등록 처리 함수를 컴포넌트 속성으로 전달받음
const SignUpForm = ({ onSignUp }) => {
  // 컴포넌트 상태 설정
  const [userId, setUserId] = useState('');
  const [userPw, setUserPw] = useState('');
  const [userPw2, setUserPw2] = useState('');
  const [checkPw, setCheckPw] = useState(false);
  const [userPwErr, setUserPwErr] = useState(false);
  const [userName, setUserName] = useState('');
  const [job, setJob] = useState('01'); // 기본값 01 - 'Developer'
  const [jobCodes, setJobCodes] = useState([]);

  // 회원 아이디의 입력을 처리하는 함수
  const handleChangeUserId = useCallback((e) => {
    setUserId(e.target.value);
  }, []);
  // 비밀번호의 입력의 처리하는 함수
  const handleChangeUserPw = useCallback((e) => {
    setUserPw(e.target.value);
  }, []);
  // 비밀번호 확인의 입력의 처리하는 함수
  const handleChangeUserPw2 = useCallback((e) => {
    setUserPw2(e.target.value);
  }, []);
  // 사용자명의 입력을 처리하는 함수
  const handleChangeUserName = useCallback((e) => {
    setUserName(e.target.value);
  }, []);
  // 직업의 입력을 처리하는 함수
  const handleChangeJob = useCallback((e) => {
    console.log(e.target.value);
    setJob(e.target.value);
  }, []);

  // 비밀번호 일치 확인
  const checkPassword = useCallback(() => {
    // 비밀번호 일치시
    if (userPw === userPw2) {
      setCheckPw(true);
      setUserPwErr(false);
      return;
    }
    // 비밀번호 길이가 다를 때
    if (userPw.length - 1 <= userPw2.length) {
      if (!userPw.match(userPw2)) {
        setUserPwErr(true); // 오류!
      }
    } else {
      setUserPwErr(false);
    }
    setCheckPw(false);
  }, [userPw, userPw2]);

  // 폼 submit 이벤트 처리
  const handleSubmit = useCallback((e) => {
    e.preventDefault();
    checkPassword();
    if (!checkPw) {
      alert('비밀번호가 일치하지 않습니다.');
      setUserPwErr(true); // 오류!
      return;
    }
    onSignUp(userId, userPw, userName, job);
  }, [userId, userPw, checkPw, userName, job, checkPassword, onSignUp]);

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

  // 마운트될 때 직업코드 목록을 가져옴
  useEffect(() => {
    getJobCodeList();
  }, []);

  useEffect(() => {
    checkPassword();
  }, [userPw, userPw2, checkPassword])

  return (
    <div className="container">
      <h3 className="center">회원가입</h3>
      <br />
      <form onSubmit={handleSubmit}>
        <div className="row">
          <div className="col s6 offset-s3">
            <div>
              <div>아이디</div>
              <div>
                <input type="text" value={userId} onChange={handleChangeUserId} required />
              </div>
            </div>
            <div>
              <div>비밀번호</div>
              <div>
                <input type="password" value={userPw} onChange={handleChangeUserPw} required />
              </div>
            </div>
            <div>
              <div>비밀번호 확인{' '}{userPwErr && <span className="red-text">(비밀번호가 일치하지 않습니다.)</span>}</div>
              <div>
                <input type="password" value={userPw2} onChange={handleChangeUserPw2} required />
              </div>
            </div>
            <div>
              <div>사용자명</div>
              <div>
                <input type="text" value={userName} onChange={handleChangeUserName} required />
              </div>
            </div>
            <div>
              <div>직업</div>
              <select value={job} onChange={handleChangeJob}>
                {jobCodes.map((jobCode) => (
                  <option value={jobCode.value} key={jobCode.value}>
                    {jobCode.label}
                  </option>
                ))}
              </select>
            </div>
          </div>
        </div>
        <div className="row">
          <div className="col s12">
            <div className="center">
              <button type="submit" className="waves-effect waves-light btn">회원가입</button>
            </div>
          </div>
        </div>
      </form>
      {/* 로그인 링크 */}
      <p align="center"><Link to="/signin">로그인</Link></p>
    </div>
  );
}

export default SignUpForm;
