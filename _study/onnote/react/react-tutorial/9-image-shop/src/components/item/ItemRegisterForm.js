import React, { useState, useCallback } from 'react';
import { Link } from 'react-router-dom';

// 등록 처리 함수를 컴포넌트 속성으로 전달 받음
const ItemRegisterForm = ({ onRegister }) => {
  // 컴포넌트 상태 설정
  const [itemName, setItemName] = useState('');
  const [price, setPrice] = useState(0);
  const [description, setDescription] = useState('');
  // 사용자 변경 이미지 파일명
  const [file, setFile] = useState(null);
  const [previewFile, setPreviewFile] = useState(null);
  // 이미지 미리보기 관련 내용 추가
  const [preview, setPreview] = useState(null);
  const [preview2, setPreview2] = useState(null);

  // 상품명의 변경을 처리하는 함수
  const handleChangeItemName = useCallback((e) => {
    setItemName(e.target.value);
  }, []);
  // 상품 가격의 변경을 처리하는 함수
  const handleChangePrice = useCallback((e) => {
    setPrice(e.target.value);
  }, []);
  // 원본 이미지 파일의 변경을 처리하는 함수
  const handleChangeFile = useCallback((e) => {
    // 이미지 미리보기 관련 내용 추가
    const fileReader = new FileReader();
    fileReader.readAsDataURL(e.target.files[0]);
    fileReader.onload = () => {
      setPreview(fileReader.result);
    };
    //console.log(e.target.files[0]);
    setFile(e.target.files[0]);
  }, []);
  // 미리보기 이미지 파일의 변경을 처리하는 함수
  const handleChangePreviewFile = useCallback((e) => {
    // 이미지 미리보기 관련 내용 추가
    const fileReader = new FileReader();
    fileReader.readAsDataURL(e.target.files[0]);
    fileReader.onload = () => {
      setPreview2(fileReader.result);
    };
    //console.log(e.target.files[0]);
    setPreviewFile(e.target.files[0]);
  }, []);
  // 상품 설명의 변경을 처리하는 함수
  const handleChangeDescription = useCallback((e) => {
    setDescription(e.target.value);
  }, []);

  // 폼 submit 이벤트 처리
  const handleSubmit = useCallback((e) => {
    e.preventDefault();
    onRegister(itemName, price, description, file, previewFile);
  }, [itemName, price, description, file, previewFile, onRegister]);

  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>새로운 상품 등록</h3>
      <div className="row">
        <form onSubmit={handleSubmit} className="col s12">
          <div className="row">
            <div className="input-field col s12">
              <input
                type="text"
                id="itemName"
                value={itemName}
                onChange={handleChangeItemName}
                required
              />
              <label className="active" htmlFor="itemName">상품명</label>
            </div>
            <div className="input-field col s12">
              <input type="text" id="price" value={price} onChange={handleChangePrice} />
              <label className="active" htmlFor="price">상품가격 (원)</label>
            </div>
          </div>
          <div className="row">
            <div className="file-field input-field col s12">
              <div className="btn">
                <span>상품파일</span>
                <input type="file" onChange={handleChangeFile} required />
              </div>
              <div className="file-path-wrapper">
                <input className="file-path validate" type="text" placeholder="선택된 파일 없음" />
              </div>
            </div>
            {/* 이미지 미리보기 관련 내용 추가 */}
            {preview && (
              <div className="input-field col s12">
                <img
                  //className="materialboxed"
                  width="500"
                  id="picture"
                  src={preview}
                  alt="이미지 미리보기"
                  style={{ marginTop: '10px' }}
                />
                <label className="active" htmlFor="picture">미리보기</label>
              </div>
            )}
          </div>
          <div className="row">
            <div className="file-field input-field col s12">
              <div className="btn">
                <span>미리보기파일</span>
                <input type="file" onChange={handleChangePreviewFile} required />
              </div>
              <div className="file-path-wrapper">
                <input className="file-path validate" type="text" placeholder="선택된 파일 없음" />
              </div>
            </div>
            {/* 이미지 미리보기 관련 내용 추가 */}
            {preview2 && (
              <div className="input-field col s12">
                <img
                  //className="materialboxed"
                  width="500"
                  id="picture"
                  src={preview2}
                  alt="이미지 미리보기"
                  style={{ marginTop: '10px' }}
                />
                <label className="active" htmlFor="picture">미리보기</label>
              </div>
            )}
          </div>
          <div className="row">
            <div className="input-field col s12">
              <textarea
                id="description"
                className="materialize-textarea"
                value={description}
                onChange={handleChangeDescription}
                style={{ height: 100 }}
                required
              ></textarea>
              <label className="active" htmlFor="description">상품설명</label>
            </div>
          </div>
          <br />
          <Link to="/item" className="waves-effect waves-light btn">취소</Link>{' '}
          <button type="submit" className="waves-effect waves-light btn blue">등록</button>
        </form>
      </div>
    </div>
  );
};

export default ItemRegisterForm;
