import React, { useState, useCallback } from 'react';
import { Link } from 'react-router-dom';

// 등록 처리 함수를 컴포넌트 속성으로 전달받음
const SignInForm = ({ onSignIn }) => {
  // 컴포넌트 상태 설정
  const [userId, setUserId] = useState('');
  const [userPw, setUserPw] = useState('');

  // 회원 아이디의 입력을 처리하는 함수
  const handleChangeUserId = useCallback((e) => {
    setUserId(e.target.value);
  }, []);
  // 비밀번호의 입력의 처리하는 함수
  const handleChangeUserPw = useCallback((e) => {
    setUserPw(e.target.value);
  }, []);

  // 폼 submit 이벤트 처리
  const handleSubmit = useCallback((e) => {
    e.preventDefault();
    onSignIn(userId, userPw);
  }, [userId, userPw, onSignIn]);

  return (
    <div className="container">
      <h3 className="center">로그인</h3>
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
          </div>
        </div>
        <div className="row">
          <div className="col s12">
            <div className="center">
              <button type="submit" className="waves-effect waves-light btn">로그인</button>
            </div>
          </div>
        </div>
      </form>
      {/* 회원가입 링크 */}
      <p align="center"><Link to="/signup">회원가입</Link></p>
    </div>
  );
}

export default SignInForm;
