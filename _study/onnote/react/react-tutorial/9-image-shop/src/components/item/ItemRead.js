import React, { useEffect } from 'react';
import { Link } from 'react-router-dom';

import M from 'materialize-css';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const ItemRead = ({ itemId, item, isAdmin, isLoading, onRemove, onBuy }) => {
  // 미리보기 이미지 URL 생성
  const pictureUrl = () => {
    return (
      `/items/display?itemId=${itemId}&timestamp=${new Date().getTime()}`
    );
  };
  const previewUrl = () => {
    return (
      `/items/preview?itemId=${itemId}&timestamp=${new Date().getTime()}`
    );
  };

  useEffect(() => {
    M.AutoInit(); // materialboxed 사용
  });

  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>상품 상세보기</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && item && (
        <div className="row">
          <div className="row">
            <div className="input-field col s5">
              <input type="text" id="itemId" value={item.itemId} disabled />
              <label className="active" htmlFor="itemId">상품번호</label>
            </div>
            <div className="input-field col s7">
              <input type="text" id="price" value={item.price} readOnly />
              <label className="active" htmlFor="price">상품가격 (원)</label>
            </div>
            <div className="input-field col s12">
              <input
                type="text"
                id="itemName"
                value={item.itemName}
                readOnly
              />
              <label className="active" htmlFor="itemName">상품명</label>
            </div>
          </div>
          <div className="row">
            <div className="input-field col s12">
              <img
                className="materialboxed"
                width="500"
                id="picture"
                src={pictureUrl()}
                alt={item.itemName}
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
                alt={item.itemName}
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
                value={item.description}
                style={{ height: 100 }}
                readOnly
              ></textarea>
              <label className="active" htmlFor="description">상품설명</label>
            </div>
          </div>
          <br />
          <Link to="/item" className="waves-effect waves-light btn">
            상품 목록
          </Link>{' '}
          {isAdmin && (
            <>
              <Link to={`/item/edit/${itemId}`} className="waves-effect waves-light btn blue">수정</Link>
              <button onClick={onRemove} className="waves-effect waves-light btn red right">삭제</button>
            </>
          )}
          {!isAdmin && (
            <button onClick={onBuy} className="waves-effect waves-light btn blue right">구매</button>
          )}
        </div>
      )}
    </div>
  );
};

export default ItemRead;