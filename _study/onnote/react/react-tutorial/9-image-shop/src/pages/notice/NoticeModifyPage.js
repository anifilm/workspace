import React from 'react';

import MainLayout from 'layout/MainLayout';
import NoticeModifyContainer from 'containers/notice/NoticeModifyContainer';

const NoticeModifyPage = ({ match }) => {
  // match 객체의 params 속성값을 참조
  const { noticeNo } = match.params;

  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <NoticeModifyContainer noticeNo={noticeNo} />
    </MainLayout>
  );
};

export default NoticeModifyPage;
