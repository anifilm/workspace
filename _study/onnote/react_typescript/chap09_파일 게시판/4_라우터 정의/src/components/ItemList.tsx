import React from 'react';
import { Link } from 'react-router-dom';

function ItemList() {
  return (
    <div className="container">
      <h3>상품 목록</h3>
        <table>
          <thead>
            <tr>
              <th style={{ width: 80, textAlign: 'center' }}>상품아이디</th>
              <th style={{ width: 320, textAlign: 'center' }}>상품명</th>
              <th style={{ width: 100, textAlign: 'center' }}>상품가격</th>
            </tr>
          </thead>
          <tbody>
            <tr>
              <td style={{ textAlign: 'center' }}>{'100'}</td>
              <td style={{ textAlign: 'left' }}><Link to={`/read/100`}>{'풍경사진'}</Link></td>
              <td style={{ textAlign: 'right' }}>{'1000'}원</td>
            </tr>
          </tbody>
        </table>
        <br />
        <Link to="/create" className="waves-effect waves-light btn blue">새로운 상품 등록</Link>
    </div>
  );
}

export default ItemList;
