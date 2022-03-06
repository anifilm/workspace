import React from 'react';
import { Link } from 'react-router-dom';

function ItemList({ items, isLoading }) {
  return (
    <div className="container">
      <h3>상품 목록</h3>
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
                <th style={{ width: 320, textAlign: 'center' }}>상품명</th>
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
                      <Link to={`/read/${item.itemId}`}>{item.itemName}</Link>
                    </td>
                    <td style={{ textAlign: 'right', paddingRight: 40 }}>
                      {item.price}원
                    </td>
                  </tr>
                ))}
            </tbody>
          </table>
          <br />
          <Link to="/create" className="waves-effect waves-light btn blue">
            새로운 상품 등록
          </Link>
        </>
      )}
    </div>
  );
}

export default ItemList;
