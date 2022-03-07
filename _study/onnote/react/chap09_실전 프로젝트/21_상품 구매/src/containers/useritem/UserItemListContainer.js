import React, { useEffect } from 'react';
import { withRouter } from 'react-router-dom';
import { useDispatch, useSelector } from 'react-redux';

import UserItemList from 'components/useritem/UserItemList';
import { FETCH_LIST, fetchList } from 'modules/useritem';
import { downloadUserItem } from 'lib/api';

const UserItemListContainer = ({ history }) => {
  // 스토어 상태 조회
  const { userItems, isLoading } = useSelector(({ useritem, loading}) => ({
    userItems: useritem.userItems,
    isLoading: loading[FETCH_LIST],
  }));
  // 스토어 dispatch 사용 가능
  const dispatch = useDispatch();

  // 마운트될 때 상품 목록을 가져옴
  useEffect(() => {
    dispatch(fetchList());
  }, [dispatch]);

  // 구매상품 다운로드 함수
  const onDownload = async (userItemNo) => {
    try {
      const response = await downloadUserItem(userItemNo);
      const contentDisposition = response.request.getResponseHeader('Content-Disposition');
      const downloadFilename = contentDisposition.substring(22, contentDisposition.length - 1);
      const decodedDownloadFilename = decodeURIComponent(escape(downloadFilename));
      const url = window.URL.createObjectURL(new Blob([response.data]));
      const link = document.createElement('a');
      link.href = url;
      link.setAttribute('download', decodedDownloadFilename);
      document.body.appendChild(link);
      link.click();
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

  // UserItemList 컴포넌트 표시
  return (
    <UserItemList
      userItems={userItems}
      isLoading={isLoading}
      onDownload={onDownload}
    />
  );
};

export default withRouter(UserItemListContainer);
