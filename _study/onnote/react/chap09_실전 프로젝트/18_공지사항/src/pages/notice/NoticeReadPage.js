import React from 'react';

import MainLayout from 'layout/MainLayout';
import NoticeReadContainer from 'containers/notice/NoticeReadContainer';

const NoticeReadPage = ({ match }) => {
  // match 객체의 params 속성값을 참조
  const { noticeNo } = match.params;

  // 메인 레이아웃 적용
  return (
    <MainLayout>
      <NoticeReadContainer noticeNo={noticeNo} />
    </MainLayout>
  );
};

export default NoticeReadPage;
