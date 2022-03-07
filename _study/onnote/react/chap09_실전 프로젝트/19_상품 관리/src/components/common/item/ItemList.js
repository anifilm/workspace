import React from 'react';
import { Link } from 'react-router-dom';

// 부모 컴포넌트에서 컴포넌트 속성으로 수신
const ItemList = ({ items, isAdmin, isLoading }) => {
  return (
    <div className="container">
      <h3 className="center" style={{ marginBottom: '30px' }}>상품 목록</h3>
      {isLoading && (
        <div className="progress">
          <div className="indeterminate"></div>
        </div>
      )}
      {!isLoading && items && (
        <>
          <table>
            <thead>
              <tr>
                <th style={{ width: 80, textAlign: 'center' }}>상품아이디</th>
                <th style={{ width: 180, textAlign: 'center' }}>상품명</th>
                <th style={{ width: 100, textAlign: 'center' }}>상품가격</th>
              </tr>
            </thead>
            <tbody>
              {!items.length && (
                <tr>
                  <td></td>
                  <td colSpan="3">List is empty.</td>
                </tr>
              )}
              {!!items.length && items.map((item) => (
                  <tr key={item.itemId}>
                    <td style={{ textAlign: 'center' }}>{item.itemId}</td>
                    <td style={{ textAlign: 'left', paddingLeft: 50 }}>
                      <Link to={`/item/read/${item.itemId}`}>{item.itemName}</Link>
                    </td>
                    <td style={{ textAlign: 'right', paddingRight: 40 }}>
                      {item.price}원
                    </td>
                  </tr>
                ))}
            </tbody>
          </table>
          {isAdmin && (
            <>
              <br />
              <Link to="/item/create" className="waves-effect waves-light btn blue">
                새로운 상품 등록
              </Link>
            </>
          )}
        </>
      )}
    </div>
  );
};

export default ItemList;
