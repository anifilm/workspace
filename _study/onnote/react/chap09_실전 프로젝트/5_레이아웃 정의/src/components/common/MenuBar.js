import React from 'react';
import { Link } from 'react-router-dom';

// 애플리케이션 메뉴바 화면 표시
const MenuBar = () => {
  return (
    <div>
      <table>
        <tbody>
          <tr>
            <td style={{ width: 120, textAlign: 'center' }}><Link to="/">홈</Link></td>
          </tr>
        </tbody>
      </table>
    </div>
  );
}

export default MenuBar;
