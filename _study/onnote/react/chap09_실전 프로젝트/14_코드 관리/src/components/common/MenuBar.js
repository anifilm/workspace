import React from 'react';
import { Link } from 'react-router-dom';

// 애플리케이션 메뉴바 화면 표시
const MenuBar = ({ isAuthorized, isAdmin }) => {
  return (
    <div>
      <table>
        <tbody>
          <tr>
            {/* 로그인한 사용자이고 관리자 */}
            {isAuthorized && isAdmin && (
              <>
                <td style={{ width: 120, textAlign: 'center' }}><Link to="/">홈</Link></td>
                <td style={{ width: 120, textAlign: 'center' }}><Link to="/codegroup">코드그룹관리</Link></td>
                <td style={{ width: 120, textAlign: 'center' }}><Link to="/codedetail">코드관리</Link></td>
              </>
            )}
            {/* 로그인한 사용자이고 관리자가 아님 */}
            {isAuthorized && !isAdmin && (
              <td style={{ width: 120, textAlign: 'center' }}><Link to="/">홈</Link></td>
            )}
            {/* 로그인하지 않은 사용자 */}
            {!isAuthorized && (
              <td style={{ width: 120, textAlign: 'center' }}><Link to="/">홈</Link></td>
            )}
          </tr>
        </tbody>
      </table>
    </div>
  );
}

export default MenuBar;
