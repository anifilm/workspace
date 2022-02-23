import React from 'react';
import { Link } from 'react-router-dom';

function BoardList() {
  return (
    <div align="center">
      <h2>게시판 목록</h2>
      <Link to="/create">새로만들기</Link>
      <table border="1">
        <thead>
          <tr>
            <th align="center" width="80">
              번호
            </th>
            <th align="center" width="320">
              제목
            </th>
            <th align="center" width="100">
              작성자
            </th>
            <th align="center" width="180">
              등록일시
            </th>
          </tr>
        </thead>
        <tbody>
          <tr>
            <td align="center">100</td>
            <td align="left"><Link to="/read/100">무제</Link></td>
            <td align="center">홍길동</td>
            <td align="center">2022-02-23</td>
          </tr>
        </tbody>
      </table>
    </div>
  );
}

export default BoardList;
