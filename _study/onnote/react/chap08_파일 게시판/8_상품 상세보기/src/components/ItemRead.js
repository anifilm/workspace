import React from 'react';
import { Link } from 'react-router-dom';

function ItemRead({ itemId, item, isLoading, onRemove }) {
  // 이미지 표시 URL 생성
  const pictureUrl = () => {
    return (
      `/items/display?itemId=${itemId}&timestamp=${new Date().getTime()}`
    );
  };

  return (
    <div className="container">
      <h3>상품 상세보기</h3>
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
                //className="materialboxed"
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
              <label className="active" htmlFor="picture">미리보기</label>
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
          <Link to="/" className="waves-effect waves-light btn">
            상품 목록
          </Link>{' '}
          <Link to={`/edit/${itemId}`} className="waves-effect waves-light btn blue">수정</Link>
          <button onClick={onRemove} className="waves-effect waves-light btn red right">삭제</button>
        </div>
      )}
    </div>
  );
}

export default ItemRead;
