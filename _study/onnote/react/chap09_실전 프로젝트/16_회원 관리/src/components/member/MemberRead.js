import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';
import { fetchJobCodeList } from 'lib/api';

import M from 'materialize-css';

const MemberRead = ({ member, userNo, isLoading, onRemove }) => {
  // 컴포넌트 상태 설정
  const [jobCodes, setJobCodes] = useState([]);

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

  // 회원 상세보기 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>회원 상세보기</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && member && (
        <div className="row">
          <div className="row">
            <div className="input-field col s12">
              <input type="text" id="userNo" value={member.userNo} disabled />
              <label className="active" htmlFor="userNo">번호</label>
            </div>
            <div className="input-field col s12">
              <input type="text" id="userId" value={member.userId} readOnly />
              <label className="active" htmlFor="userId">아이디</label>
            </div>
            <div className="input-field col s12">
              <input type="text" id="userName" value={member.userName} readOnly />
              <label className="active" htmlFor="userName">사용자명</label>
            </div>
            <div className="input-field col s12">
              <select id="jobCode" value={member.job} disabled>
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
              <select id="auth1" value={member.authList[0] && member.authList[0].auth} disabled>
                <option value="">--- 선택해 주세요 ---</option>
                <option value="ROLE_USER">사용자</option>
                <option value="ROLE_MEMBER">회원</option>
                <option value="ROLE_ADMIN">관리자</option>
              </select>
              <label htmlFor="auth1">권한 - 1</label>
            </div>
            <div className="input-field col s12">
              <select id="auth2" value={member.authList[1] && member.authList[1].auth} disabled>
                <option value="">--- 선택해 주세요 ---</option>
                <option value="ROLE_USER">사용자</option>
                <option value="ROLE_MEMBER">회원</option>
                <option value="ROLE_ADMIN">관리자</option>
              </select>
              <label htmlFor="auth2">권한 - 2</label>
            </div>
            <div className="input-field col s12">
              <select id="auth3" value={member.authList[2] && member.authList[2].auth} disabled>
                <option value="">--- 선택해 주세요 ---</option>
                <option value="ROLE_USER">사용자</option>
                <option value="ROLE_MEMBER">회원</option>
                <option value="ROLE_ADMIN">관리자</option>
              </select>
              <label htmlFor="auth3">권한 - 3</label>
            </div>
          </div>
          <br />
          <Link to="/member" className="waves-effect waves-light btn">
            회원 목록
          </Link>{' '}
          <Link to={`/member/edit/${userNo}`} className="waves-effect waves-light btn blue">수정</Link>
          <button onClick={onRemove} className="waves-effect waves-light btn red right">삭제</button>
        </div>
      )}
    </div>
  );
};

export default MemberRead;
