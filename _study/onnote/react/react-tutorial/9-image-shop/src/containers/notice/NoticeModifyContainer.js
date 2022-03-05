import React, { useEffect } from 'react';
import { withRouter } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';

import NoticeModifyForm from 'components/notice/NoticeModifyForm';
import { FETCH_ONE, fetchOne } from 'modules/notice';
import { modifyNotice } from 'lib/api';

// match, history 객체를 전달받음
const NoticeModifyContainer = ({ noticeNo, history }) => {
  // 스토어 상태 조회
  const { notice, isLoading } = useSelector(({ notice, loading }) => ({
    notice: notice.notice,
    isLoading: loading[FETCH_ONE],
  }));
  // 스토어 dispatch 사용
  const dispatch = useDispatch();

  // 마운트될 때 공지사항 상세정보를 가져옴
  useEffect(() => {
    dispatch(fetchOne(noticeNo));
  }, [dispatch, noticeNo]);

  // 수정 처리 함수 정의
  const onModify = async (noticeNo, title, content) => {
    try {
      await modifyNotice(noticeNo, title, content);
      alert('수정이 완료되었습니다.');
      history.push(`/notice/read/${noticeNo}`);
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
  }

  // NoticeModifyForm 컴포넌트 표시
  return (
    <NoticeModifyForm
      notice={notice}
      isLoading={isLoading}
      onModify={onModify}
    />
  );
};

// withRouter 함수를 사용하여 history 객체에 접근
export default withRouter(NoticeModifyContainer);
