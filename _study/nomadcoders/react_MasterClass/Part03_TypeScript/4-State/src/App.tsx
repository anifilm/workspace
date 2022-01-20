import React from 'react';
import styled from 'styled-components';

import Circle from './components/Circle';

const Wrapper = styled.div`
  display: flex;
`;

const App = () => {
  return (
    <Wrapper>
      <Circle bgColor="teal" borderColor="turquoise" />
      <Circle bgColor="tomato" />
    </Wrapper>
  );
};

export default App;
