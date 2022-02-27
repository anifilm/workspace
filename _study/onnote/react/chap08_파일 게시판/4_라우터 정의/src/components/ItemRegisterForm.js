import React from 'react';
import { Link } from 'react-router-dom';

function ItemRegisterForm() {
  return (
    <div className="container">
      <h3>새로운 상품 등록</h3>
      <div className="row">
        <form className="col s12">
          <div className="row">
          <div className="input-field col s12">
              <input
                type="text"
                id="title"
                value="풍경사진"
                required
              />
              <label className="active" htmlFor="title">상품명</label>
            </div>
            <div className="input-field col s12">
              <input type="text" id="reg-date" value="1000원" />
              <label className="active" htmlFor="reg-date">상품가격</label>
            </div>
          </div>
          <div className="row">
            <div class="file-field input-field col s12">
              <div class="btn">
                <span>파일선택</span>
                <input type="file"/>
              </div>
              <div class="file-path-wrapper">
                <input class="file-path validate" type="text"  placeholder="선택된 파일 없음" />
              </div>
            </div>
            {/*<div className="input-field col s12">
              <img
                //class="materialboxed"
                width="500"
                id="picture"
                src="https://picsum.photos/500/300"
                alt="풍경사진"
                style={{ marginTop: '10px' }}
              />
              <label className="active" htmlFor="picture">미리보기</label>
            </div>*/}
          </div>
          <div className="row">
            <div className="input-field col s12">
              <textarea
                id="textarea"
                className="materialize-textarea"
                value="풍경사진"
                style={{ height: 100 }}
                required
              ></textarea>
              <label className="active" htmlFor="textarea">상품설명</label>
            </div>
          </div>
          <br />
          <Link to="/" className="waves-effect waves-light btn">취소</Link>{' '}
          <button type="submit" className="waves-effect waves-light btn blue">등록</button>
        </form>
      </div>
    </div>
  );
}

export default ItemRegisterForm;
