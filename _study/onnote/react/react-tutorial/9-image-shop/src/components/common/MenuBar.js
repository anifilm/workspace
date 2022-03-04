import React from 'react';
import { Link } from 'react-router-dom';

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
