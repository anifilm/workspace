import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';
import { fetchJobCodeList } from 'lib/api';

import M from 'materialize-css';

const MemberModifyForm = ({ member, isLoading, onModify }) => {
  const [jobCodes, setJobCodes] = useState([]);

  const [userName, setUserName] = useState('');
  const [job, setJob] = useState('');

  const [auth1, setAuth1] = useState('');
  const [auth2, setAuth2] = useState('');
  const [auth3, setAuth3] = useState('');

  // 사용자명 값의 변경을 처리하는 함수
  const handleChangeUserName = (e) => {
    setUserName(e.target.value);
  };
  // 직업의 변경을 처리하는 함수
  const handleChangeJob = (e) => {
    setJob(e.target.value);
  };
  // 사용자 권한의 변경을 처리하는 함수
  const handleChangeAuth1 = (e) => {
    setAuth1(e.target.value);
  };
  const handleChangeAuth2 = (e) => {
    setAuth2(e.target.value);
  };
  const handleChangeAuth3 = (e) => {
    setAuth3(e.target.value);
  };

  // 폼 submit 이벤트 처리
  const handleSubmit = (e) => {
    e.preventDefault();
    const userNo = member.userNo;
    const userObject = {
      userId: member.userId,
      userPw: member.userPw,
      userName: userName,
      job: job,
      authList: [
        {
          userNo,
          auth: auth1,
        },
        {
          userNo,
          auth: auth2,
        },
        {
          userNo,
          auth: auth3,
        },
      ],
    };
    onModify(member.userNo, userObject);
  };

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

  // 마운트될 때 기존의 사용자명, 직업코드, 권한을 가져옴
  useEffect(() => {
    if (member) {
      setUserName(member.userName);
      setJob(member.job);
      setAuth1(member.authList[0] && member.authList[0].auth);
      setAuth2(member.authList[1] && member.authList[1].auth);
      setAuth3(member.authList[2] && member.authList[2].auth);
    }
  }, [member]);

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
              <div className="input-field col s12">
                <input type="text" id="userNo" value={member.userNo} disabled />
                <label className="active" htmlFor="userNo">번호</label>
              </div>
              <div className="input-field col s12">
                <input type="text" id="userId" value={member.userId} disabled />
                <label className="active" htmlFor="userId">아이디</label>
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
            <div className="row">
              <div className="input-field col s12">
                <select id="auth1" value={auth1} onChange={handleChangeAuth1}>
                  <option value="">--- 선택해 주세요 ---</option>
                  <option value="ROLE_USER">사용자</option>
                  <option value="ROLE_MEMBER">회원</option>
                  <option value="ROLE_ADMIN">관리자</option>
                </select>
                <label htmlFor="auth1">권한 - 1</label>
              </div>
              <div className="input-field col s12">
                <select id="auth2" value={auth2} onChange={handleChangeAuth2}>
                  <option value="">--- 선택해 주세요 ---</option>
                  <option value="ROLE_USER">사용자</option>
                  <option value="ROLE_MEMBER">회원</option>
                  <option value="ROLE_ADMIN">관리자</option>
                </select>
                <label htmlFor="auth2">권한 - 2</label>
              </div>
              <div className="input-field col s12">
                <select id="auth3" value={auth3} onChange={handleChangeAuth3}>
                  <option value="">--- 선택해 주세요 ---</option>
                  <option value="ROLE_USER">사용자</option>
                  <option value="ROLE_MEMBER">회원</option>
                  <option value="ROLE_ADMIN">관리자</option>
                </select>
                <label htmlFor="auth3">권한 - 3</label>
              </div>
            </div>
            <br />
            <Link to={`/member/read/${member.userNo}`} className="waves-effect waves-light btn">취소</Link>{' '}
            <button type="submit" className="waves-effect waves-light btn blue">완료</button>
          </form>
        </div>
      )}
    </div>
  );
};

export default MemberModifyForm;
