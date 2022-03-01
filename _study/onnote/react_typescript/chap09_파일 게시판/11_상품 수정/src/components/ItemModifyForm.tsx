import React, { useState, useEffect, useCallback } from 'react';
import { Link } from 'react-router-dom';
import { Item } from '../App';

interface Props {
  readonly item?: Item;
  readonly isLoading: boolean;
  readonly onModify: (itemName: string, price: number, description: string, file?: File) => void;
}

function ItemModifyForm({ item, isLoading, onModify }: Props) {
  const [itemName, setItemName] = useState('');
  const [price, setPrice] = useState(0);
  const [description, setDescription] = useState('');
  // 사용자 변경 이미지 파일명
  const [file, setFile] = useState<any>();
  // 이미지 미리보기 관련 내용 추가
  const [preview, setPreview] = useState<any>();

  // 이미지 표시 URL 생성
  const pictureUrl = (itemId: string) => {
    return (
      `/items/display?itemId=${itemId}&timestamp=${new Date().getTime()}`
    );
  };

  const handleChangeItemName = useCallback((e: React.ChangeEvent<HTMLInputElement>) => {
    setItemName(e.target.value);
  }, []);
  const handleChangePrice = useCallback((e: React.ChangeEvent<HTMLInputElement>) => {
    setPrice(Number.parseInt(e.target.value));
  }, []);
  const handleChangeDescription = useCallback((e: React.ChangeEvent<HTMLTextAreaElement>) => {
    setDescription(e.target.value);
  }, []);
  const handleChangeFile = useCallback((e: React.ChangeEvent<HTMLInputElement>) => {
    if (e.target.files) {
      // 이미지 미리보기 관련 내용 추가
      const fileReader = new FileReader();
      fileReader.readAsDataURL(e.target.files[0]);
      fileReader.onload = () => {
        setPreview(fileReader.result);
      };
      //console.log(e.target.files[0]);
      setFile(e.target.files[0]);
    }
  }, []);

  const handleSubmit = useCallback((e: React.FormEvent<HTMLFormElement>) => {
    e.preventDefault();
    onModify(itemName, price, description, file);
  }, [onModify, itemName, price, description, file]);

  useEffect(() => {
    if (item) {
      setItemName(item.itemName);
      setPrice(item.price);
      setDescription(item.description);
      // 파일명 가져오기
      const filename: string = item.pictureUrl.split('_').splice(1).join('_');
      setFile(filename);
    }
  }, [item]);

  return (
    <div className="container">
      <h3>상품 수정</h3>
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
                  <span>파일선택</span>
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
                    //className="materialboxed"
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
                    //className="materialboxed"
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
            <Link to={`/read/${item.itemId}`} className="waves-effect waves-light btn">취소</Link>{' '}
            <button type="submit" className="waves-effect waves-light btn blue">완료</button>
          </form>
        </div>
      )}
    </div>
  );
}

export default ItemModifyForm;
