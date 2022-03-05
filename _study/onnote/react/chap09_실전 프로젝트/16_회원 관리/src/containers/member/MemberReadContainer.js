import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import { withRouter } from 'react-router-dom';

import MemberRead from 'components/member/MemberRead';
import { FETCH_ONE, fetchOne } from 'modules/member';
import { removeMember } from 'lib/api';

// 속성값으로 userNo와 history를 전달받음
const MemberReadContainer = ({ userNo, history }) => {
  // 스토어 상태 조회
  const { member, isLoading } = useSelector(({ member, loading }) => ({
    member: member.member,
    isLoading: loading[FETCH_ONE],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 회원목록 상제정보를 가져옴
  useEffect(() => {
    dispatch(fetchOne(userNo));
  }, [dispatch, userNo]);

  // 삭제 처리
  const onRemove = async () => {
    try {
      await removeMember(userNo);
      alert('삭제가 완료되었습니다.');
      history.push('/member');
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

  // 회원목록 상세보기 컴포넌트 표시
  return (
    <MemberRead
      member={member}
      userNo={userNo}
      isLoading={isLoading}
      onRemove={onRemove}
    />
  );
};

// withRouter 함수를 사용하여 history 객체에 접근
export default withRouter(MemberReadContainer);
