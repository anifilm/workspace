import React from 'react';
import { FaCode } from 'react-icons/fa';

const LandingPage = () => {
  return (
    <>
      <div className="app">
        <FaCode style={{ fontSize: '4rem' }} /><br />
        <span style={{ fontSize: '2rem' }}>Let's Start Coding!</span>
      </div>
      <div style={{ float: 'right', marginRight: '10px' }}>
        Thanks For Using This Boiler Plate by John Ahn
      </div>
    </>
  );
};

export default LandingPage;
