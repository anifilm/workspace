import React from 'react';
import { Icon } from 'antd';

const Footer = () => {
  return (
    <div
      style={{
        height: '80px',
        display: 'flex',
        flexDirection: 'column',
        alignItems: 'center',
        justifyContent: 'center',
        fontSize: '1rem',
      }}
    >
      <p>
        {' '}
        Happy Coding <Icon type="smile" />
      </p>
    </div>
  );
};

export default Footer;
