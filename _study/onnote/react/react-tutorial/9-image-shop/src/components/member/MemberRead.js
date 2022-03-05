import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';

const MemberRead = ({ member, userNo, isLoading, onRemove }) => {
  // 컴포넌트 상태 설정
  const [jobCodes, setJobCodes] = useState([]);

  // 직업코드 목록을 가져옴
  const getJobCodeList = async () => {

  };

  // 마운팅될 때 직업 코드 목록을 가져옴
  useEffect(() => {

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
            <div className="input-field col s6">
              <input type="text" id="userNo" value={member.userNo} disabled />
              <label className="active" htmlFor="userNo">회원목록코드</label>
            </div>
            <div className="input-field col s6">
              <input type="text" id="groupName" value={member.groupName} readOnly />
              <label className="active" htmlFor="groupName">회원목록명</label>
            </div>
          </div>
          <br />
          <Link to="/member" className="waves-effect waves-light btn">
            상품 목록
          </Link>{' '}
          <Link to={`/member/edit/${userNo}`} className="waves-effect waves-light btn blue">수정</Link>
          <button onClick={onRemove} className="waves-effect waves-light btn red right">삭제</button>
        </div>
      )}
    </div>
  );
};

export default MemberRead;
