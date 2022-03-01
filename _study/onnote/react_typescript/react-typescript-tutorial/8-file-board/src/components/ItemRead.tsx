import React from 'react';
import { Link } from 'react-router-dom';
import { Item } from '../App';

interface Props {
  readonly itemId: string;
  readonly item?: Item;
  readonly isLoading: boolean;
  readonly onRemove: () => void;
}

function ItemRead({ itemId, item, isLoading, onRemove }: Props) {
  return (
    <div className="container">
      <h3>작성글 상세보기</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && item && (
        <div className="row">
          <div className="col s12">
            <div className="row">
              <div className="input-field col s4">
                <input type="text" id="itemId" value={item.itemId} disabled />
                <label className="active" htmlFor="itemId">번호</label>
              </div>
              <div className="input-field col s4">
                <input type="text" id="writer" value={item.writer} disabled />
                <label className="active" htmlFor="writer">글쓴이</label>
              </div>
              <div className="input-field col s4">
                <input type="text" id="regDate" value={item.regDate} disabled />
                <label className="active" htmlFor="regDate">작성일자</label>
              </div>
              <div className="input-field col s12">
                <input type="text" id="title" value={item.title} readOnly />
                <label className="active" htmlFor="title">제목</label>
              </div>
            </div>
            <div className="row">
              <div className="input-field col s12">
                <textarea
                  id="textarea"
                  className="materialize-textarea"
                  value={item.content}
                  readOnly
                  style={{ height: 200 }}
                ></textarea>
                <label className="active" htmlFor="textarea">내용</label>
              </div>
            </div>
          </div>
          <br />
          <Link to="/" className="waves-effect waves-light btn">
            글 목록
          </Link>{' '}
          <Link to={`/edit/${itemId}`} className="waves-effect waves-light btn blue">수정</Link>{' '}
          <button onClick={onRemove} className="waves-effect waves-light btn red right">삭제</button>
        </div>
      )}
    </div>
  );
}

export default ItemRead;
