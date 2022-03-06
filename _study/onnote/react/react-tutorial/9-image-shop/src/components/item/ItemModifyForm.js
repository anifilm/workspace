import React, { useState, useCallback, useEffect } from 'react';
import { Link } from 'react-router-dom';

import M from 'materialize-css';

// 컴포넌트 속성값 수신
const ItemModifyForm = ({ item, isLoading, onModify }) => {
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

  // 미리보기 이미지 URL 생성
  const pictureUrl = (itemId) => {
    return (
      `/items/display?itemId=${itemId}&timestamp=${new Date().getTime()}`
    );
  };
  const previewUrl = (itemId) => {
    return (
      `/items/preview?itemId=${itemId}&timestamp=${new Date().getTime()}`
    );
  };

  // 상품명의 변경을 처리하는 함수
  const handleChangeItemName = useCallback((e) => {
    setItemName(e.target.value);
  }, []);
  // 상품 가격의 변경을 처리하는 함수
  const handleChangePrice = useCallback((e) => {
    setPrice(e.target.value);
  }, []);
  // 원본 이미지 파일의 변경을 처라하는 함수
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
  const handleSubmit = (e) => {
    e.preventDefault();
    onModify(item.itemId, itemName, price, description, file, previewFile);
  }

  useEffect(() => {
    M.AutoInit(); // materialboxed 사용
  }, []);

  // 마운트될 때 상품 상세정보를 가져옴
  useEffect(() => {
    if (item) {
      setItemName(item.itemName);
      setPrice(item.price);
      setDescription(item.description);
      // 파일명 가져오기
      const filename = item.pictureUrl.split('_').splice(1).join('_');
      setFile(filename);
      // 파일명2 가져오기
      const filename2 = item.previewUrl.split('_').splice(1).join('_');
      setPreviewFile(filename2);
    }
  }, [item]);

  // 게시글 수정 폼 화면 표시
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '40px' }}>상품 수정</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && item && (
        <div className="row">
          <form onSubmit={handleSubmit} className="col s12">
            <div className="row">
              <div className="input-field col s5">
                <input type="text" id="itemId" value={item.itemId} disabled />
                <label className="active" htmlFor="itemId">상품번호</label>
              </div>
              <div className="input-field col s7">
                <input type="text" id="price" value={price} onChange={handleChangePrice} />
                <label className="active" htmlFor="price">상품가격 (원)</label>
              </div>
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
            </div>
            <div className="row">
              <div className="file-field input-field col s12">
                <div className="btn">
                  <span>상품파일</span>
                  <input type="file" onChange={handleChangeFile} />
                </div>
                <div className="file-path-wrapper">
                  <input className="file-path validate" type="text"
                    placeholder={file} />
                </div>
              </div>
              {/* 이미지 미리보기 관련 내용 추가 */}
              {preview ? (
                <div className="input-field col s12">
                  {/* 수정한 이미지 미리보기 */}
                  <img
                    className="materialboxed"
                    width="500"
                    id="picture"
                    src={preview}
                    alt="이미지 미리보기"
                    style={{ marginTop: '10px' }}
                  />
                  <label className="active" htmlFor="picture">미리보기</label>
                </div>
              ) : (
                <div className="input-field col s12">
                  {/* 기존 업로드 이미지 */}
                  <img
                    className="materialboxed"
                    width="500"
                    id="picture"
                    src={pictureUrl(item.itemId)}
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
              )}
            </div>
            <div className="row">
              <div className="file-field input-field col s12">
                <div className="btn">
                  <span>미리보기파일</span>
                  <input type="file" onChange={handleChangePreviewFile} />
                </div>
                <div className="file-path-wrapper">
                  <input className="file-path validate" type="text"
                    placeholder={previewFile} />
                </div>
              </div>
              {/* 이미지 미리보기 관련 내용 추가 */}
              {preview2 ? (
                <div className="input-field col s12">
                  {/* 수정한 이미지 미리보기 */}
                  <img
                    className="materialboxed"
                    width="500"
                    id="picture"
                    src={preview2}
                    alt="이미지 미리보기"
                    style={{ marginTop: '10px' }}
                  />
                  <label className="active" htmlFor="picture">미리보기</label>
                </div>
              ) : (
                <div className="input-field col s12">
                  {/* 기존 업로드 이미지 */}
                  <img
                    className="materialboxed"
                    width="500"
                    id="picture"
                    src={previewUrl(item.itemId)}
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
            <Link to={`/item/read/${item.itemId}`} className="waves-effect waves-light btn">취소</Link>{' '}
            <button type="submit" className="waves-effect waves-light btn blue">완료</button>
          </form>
        </div>
      )}
    </div>
  );
}

export default ItemModifyForm;
