import React, { useCallback } from 'react';
import { Link } from 'react-router-dom';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const UserItemList = ({ userItems, isLoading, onDownload }) => {
  // 구매상품 다운로드 처리
  const handleClickDownload = useCallback((userItemNo) => {
    onDownload(userItemNo);
  }, [onDownload]);

  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '30px' }}>구매상품 목록</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && userItems && (
        <>
          <table>
            <thead>
              <tr>
                <th style={{ width: 80, textAlign: 'center' }}>번호</th>
                <th style={{ width: 180, textAlign: 'center' }}>상품명</th>
                <th style={{ width: 100, textAlign: 'center' }}>상품가격</th>
                <th style={{ width: 180, textAlign: 'center' }}>구매일시</th>
                <th style={{ width: 100, textAlign: 'center' }}>다운로드</th>
              </tr>
            </thead>
            <tbody>
              {!userItems.length && (
                <tr>
                  <td></td>
                  <td colSpan="3">List is empty.</td>
                </tr>
              )}
              {!!userItems.length && userItems.map((userItem) => (
                  <tr key={userItem.userItemNo}>
                    <td style={{ textAlign: 'center' }}>{userItem.userItemNo}</td>
                    <td style={{ textAlign: 'left', paddingLeft: 40 }}>
                      <Link to={`/useritem/read/${userItem.userItemNo}`}>{userItem.itemName}</Link>
                    </td>
                    <td style={{ textAlign: 'right', paddingRight: 10 }}>
                      {userItem.price}원
                    </td>
                    <td style={{ textAlign: 'center' }}>{userItem.regDate}</td>
                    <td className="blue-text" style={{ textAlign: 'center', cursor: 'pointer' }}>
                      <span onClick={() => handleClickDownload(userItem.userItemNo)}>DOWNLOAD</span>
                    </td>
                  </tr>
                ))}
            </tbody>
          </table>
        </>
      )}
    </div>
  );
};

export default UserItemList;
