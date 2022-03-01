import React from 'react';
import { Link } from 'react-router-dom';

function ItemModifyForm() {
  return (
    <div className="container">
      <h3>상품 수정</h3>
      <div className="row">
        <form className="col s12">
          <div className="row">
            <div className="input-field col s5">
              <input type="text" id="itemId" disabled />
              <label className="active" htmlFor="itemId">상품번호</label>
            </div>
            <div className="input-field col s7">
              <input type="text" id="price" />
              <label className="active" htmlFor="price">상품가격 (원)</label>
            </div>
            <div className="input-field col s12">
              <input
                type="text"
                id="itemName"
                required
              />
              <label className="active" htmlFor="itemName">상품명</label>
            </div>
          </div>
          <div className="row">
            <div className="file-field input-field col s12">
              <div className="btn">
                <span>파일선택</span>
                <input type="file" />
              </div>
              <div className="file-path-wrapper">
                <input className="file-path validate" type="text"
                  placeholder="선택된 파일 없음" />
              </div>
            </div>
            <div className="input-field col s12">
              <img
                //className="materialboxed"
                width="500"
                id="picture"
                src="https://picsum.photos/500/300"
                alt="이미지 미리보기"
                style={{ marginTop: '10px' }}
              />
              <label className="active" htmlFor="picture">미리보기</label>
            </div>
          </div>
          <div className="row">
            <div className="input-field col s12">
              <textarea
                id="description"
                className="materialize-textarea"
                style={{ height: 100 }}
                required
              ></textarea>
              <label className="active" htmlFor="description">상품설명</label>
            </div>
          </div>
          <br />
          <Link to={`/read/100`} className="waves-effect waves-light btn">취소</Link>{' '}
          <button type="submit" className="waves-effect waves-light btn blue">완료</button>
        </form>
      </div>
    </div>
  );
}

export default ItemModifyForm;
