import React, { useEffect } from 'react';
import { withRouter } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';

import NoticeRead from 'components/notice/NoticeRead';
import { FETCH_ONE, fetchOne } from 'modules/notice';
import { isAdmin as hasRoleAdmin } from 'modules/selector';
import { removeNotice } from 'lib/api';

// match 객체의 params 값을 참조
const NoticeReadContainer = ({ noticeNo, history }) => {
  // 스토어 상태 조회
  const { notice, isAdmin, isLoading } = useSelector((state) => ({
    notice: state.notice.notice,
    isAdmin: hasRoleAdmin(state),
    isLoading: state.loading[FETCH_ONE],
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 마운트될 때 공지사항 상세정보를 가져옴
  useEffect(() => {
    dispatch(fetchOne(noticeNo));
  }, [dispatch, noticeNo]);

  // 삭제 처리 함수 정의
  const onRemove = async () => {
    try {
      await removeNotice(noticeNo);
      alert('삭제가 완료되었습니다.');
      history.push('/notice');
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

  // NoticeRead 컴포넌트 표시
  return (
    <NoticeRead
      noticeNo={noticeNo}
      notice={notice}
      isAdmin={isAdmin}
      isLoading={isLoading}
      onRemove={onRemove}
    />
  );
};

export default withRouter(NoticeReadContainer);
