import React from 'react';
import { Link } from 'react-router-dom';

function ItemRead() {
  return (
    <div className="container">
      <h3>상품 상세보기</h3>
      <div className="row">
        <div className="row">
          <div className="input-field col s5">
            <input type="text" id="item-id" value="100" disabled />
            <label className="active" htmlFor="item-no">상품번호</label>
          </div>
          <div className="input-field col s7">
            <input type="text" id="reg-date" value="1000원" disabled />
            <label className="active" htmlFor="reg-date">상품가격</label>
          </div>
          <div className="input-field col s12">
            <input
              type="text"
              id="title"
              value="풍경사진"
              disabled
            />
            <label className="active" htmlFor="title">상품명</label>
          </div>
        </div>
        <div className="row">
          <div className="input-field col s12">
            <img
              //class="materialboxed"
              width="500"
              id="picture"
              src="https://picsum.photos/500/300"
              alt="풍경사진"
              style={{ marginTop: '10px' }}
            />
            <label className="active" htmlFor="picture">미리보기</label>
          </div>
        </div>
        <div className="row">
          <div className="input-field col s12">
            <textarea
              id="textarea"
              className="materialize-textarea"
              value="풍경사진"
              style={{ height: 100 }}
              disabled
            ></textarea>
            <label className="active" htmlFor="textarea">상품설명</label>
          </div>
        </div>
        <br />
        <Link to="/" className="waves-effect waves-light btn">
          상품 목록
        </Link>{' '}
        <Link to={`/edit/100`} className="waves-effect waves-light btn blue">수정</Link>{' '}
        <button className="waves-effect waves-light btn red right">삭제</button>
      </div>
    </div>
  );
}

export default ItemRead;
