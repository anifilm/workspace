import React, { useEffect } from 'react';
import { Link } from 'react-router-dom';

import M from 'materialize-css';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const UserItemRead = ({ userItem, isLoading }) => {
  // 미리보기 이미지 URL 생성
  const pictureUrl = () => {
    return (
      `/items/display?itemId=${userItem.itemId}&timestamp=${new Date().getTime()}`
    );
  };
  const previewUrl = () => {
    return (
      `/items/preview?itemId=${userItem.itemId}&timestamp=${new Date().getTime()}`
    );
  };

  useEffect(() => {
    M.AutoInit(); // materialboxed 사용
  });

  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>구매상품 상세보기</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && userItem && (
        <div className="row">
          <div className="row">
            <div className="input-field col s5">
              <input type="text" id="userItemId" value={userItem.userItemNo} disabled />
              <label className="active" htmlFor="userItemId">상품번호</label>
            </div>
            <div className="input-field col s7">
              <input type="text" id="price" value={userItem.price} readOnly />
              <label className="active" htmlFor="price">상품가격 (원)</label>
            </div>
            <div className="input-field col s12">
              <input
                type="text"
                id="userItemName"
                value={userItem.itemName}
                readOnly
              />
              <label className="active" htmlFor="userItemName">상품명</label>
            </div>
          </div>
          <div className="row">
            <div className="input-field col s12">
              <img
                className="materialboxed"
                width="500"
                id="picture"
                src={pictureUrl()}
                alt={userItem.itemName}
                style={{ marginTop: '10px' }}
                // 이미지 로딩 에러시 임의의 이미지 출력
                onError={({ currentTarget }) => {
                  currentTarget.onerror = null;
                  currentTarget.src="https://picsum.photos/500/300";
                }}
              />
              <label className="active" htmlFor="picture">상품파일</label>
            </div>
          </div>
          <div className="row">
            <div className="input-field col s12">
              <img
                className="materialboxed"
                width="500"
                id="picture"
                src={previewUrl()}
                alt={userItem.itemName}
                style={{ marginTop: '10px' }}
                // 이미지 로딩 에러시 임의의 이미지 출력
                onError={({ currentTarget }) => {
                  currentTarget.onerror = null;
                  currentTarget.src="https://picsum.photos/500/300";
                }}
              />
              <label className="active" htmlFor="picture">미리보기파일</label>
            </div>
          </div>
          <div className="row">
            <div className="input-field col s12">
              <textarea
                id="description"
                className="materialize-textarea"
                value={userItem.description}
                style={{ height: 100 }}
                readOnly
              ></textarea>
              <label className="active" htmlFor="description">상품설명</label>
            </div>
          </div>
          <br />
          <Link to="/useritem" className="waves-effect waves-light btn">
            상품 목록
          </Link>
        </div>
      )}
    </div>
  );
};

export default UserItemRead;
