import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import { withRouter } from 'react-router-dom';

import MemberModifyForm from 'components/member/MemberModifyForm';
import { FETCH_ONE, fetchOne } from 'modules/member';
import { modifyMember } from 'lib/api';

// 속성값으로 userNo와 history를 전달받음
const MemberModifyContainer = ({ userNo, history }) => {
  // 스토어 상태 조회
  const { member, isLoading } = useSelector(({ member, loading }) => ({
    member: member.member,
    isLoading: loading[FETCH_ONE],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 회원 상세정보를 가져옴
  useEffect(() => {
    dispatch(fetchOne(userNo));
  }, [dispatch, userNo]);

  // 수정 처리
  const onModify = async (userNo, payload) => {
    try {
      await modifyMember(userNo, payload);
      alert('수정이 완료되었습니다.');
      history.push(`/member/read/${userNo}`);
    } catch (err) {
      if (err.response.status === 400) {
        alert('잘못된 요청입니다.');
      } else if (err.response.status === 401) {
        alert('로그인이 필요합니다.');
        history.push('/signin');
      } else if (err.response.status === 403) {
        alert('접근 권한이 없습니다.');
        history.goBack();
      } else {
        alert(err.response.data.message);
      }
    }
  };

  return (
    <MemberModifyForm
      member={member}
      isLoading={isLoading}
      onModify={onModify}
    />
  );
};

export default withRouter(MemberModifyContainer);
