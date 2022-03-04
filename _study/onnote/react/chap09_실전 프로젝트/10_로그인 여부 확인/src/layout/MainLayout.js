import React from 'react';

import MainHeaderContainer from 'containers/common/MainHeaderContainer';

import MenuBar from 'components/common/MenuBar';
import Footer from 'components/common/Footer';

const MainLayout = ({ children }) => {
  return (
    <div>
      <MainHeaderContainer />
      <MenuBar />
      {children}
      <Footer />
    </div>
  );
}

export default MainLayout;
